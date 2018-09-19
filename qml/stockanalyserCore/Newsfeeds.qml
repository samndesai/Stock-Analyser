import QtQuick 2.5
import QtQuick.XmlListModel 2.0
import QtQuick.Window 2.0
import "./newsfeedhelper"

Rectangle {
    id: window
    width: central_window.width*0.7
    height: central_window.height*0.20
    property string currentFeed: rssFeeds.get(0).feed
    property bool loading: feedModel.status === XmlListModel.Loading
    property bool isPortrait: Screen.primaryOrientation === Qt.PortraitOrientation

    onLoadingChanged: {
        if (feedModel.status == XmlListModel.Ready)
            list.positionViewAtBeginning()
    }
    property int itemWidth: 150
    RssFeeds { id: rssFeeds }

    XmlListModel {
        id: feedModel
        source: window.currentFeed
        //query: "/rss/channel/item[child::media:content]"
        //namespaceDeclarations: "declare namespace media = 'http://search.yahoo.com/mrss/';"
        query: "/rss/channel/item"
//        namespaceDeclarations: "declare namespace media = 'http://search.yahoo.com/mrss/';"
        XmlRole { name: "title"; query: "title/string()" }
        XmlRole { name: "link"; query: "link/string()" }
        XmlRole { name: "pubDate"; query: "pubDate/string()" }
    }

    ListView {
        id: categories
        width: itemWidth
        height: window.height
        anchors.top: parent.top
        model: rssFeeds
        delegate: CategoryDelegate { itemSize: itemWidth}
        spacing: 2
    }

    ScrollBar {
        id: listScrollBar
        width: 8
        height: central_window.height*0.2
        scrollArea: categories;
        anchors.right: categories.right
    }

    ListView {
        id: list
        width: window.width - itemWidth
        height: window.height
        anchors.left: categories.right
        anchors.top: window.top
        anchors.bottom: window.bottom
        anchors.leftMargin: 30
        anchors.rightMargin: 4
        model: feedModel
        delegate: NewsDelegate {}
    }

    ScrollBar {
        scrollArea: list
        width: 8
        anchors.right: window.right
        anchors.top: window.top
        anchors.bottom: window.bottom
    }
}
