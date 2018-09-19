import QtQuick 2.5

Rectangle {
    id: delegate
    property bool selected: ListView.isCurrentItem
    property real itemSize
    width: itemSize
    height: 40

    Text {
        id: titleText
        anchors {
            left: delegate.left; leftMargin: 20
            right: delegate.right; rightMargin: 20
            top: delegate.top; topMargin: 2
        }
        width: itemSize - 25
        font { pixelSize: 15; bold: true }
        text: name
        color: selected ? "blue" : "black"
        scale: selected ? 1.15 : 1.0
        Behavior on color { ColorAnimation { duration: 150 } }
        Behavior on scale { PropertyAnimation { duration: 300 } }
    }

    BusyIndicator {
        anchors.right: parent.right
        width: 25
        anchors.verticalCenter: delegate.verticalCenter
        visible: delegate.ListView.isCurrentItem && window.loading
    }

    MouseArea {
        anchors.fill: delegate
        onClicked: {
            delegate.ListView.view.currentIndex = index
            if (window.currentFeed == feed)
                feedModel.reload()
            else
                window.currentFeed = feed
        }
    }
}
