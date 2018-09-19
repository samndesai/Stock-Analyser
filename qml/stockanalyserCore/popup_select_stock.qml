import QtQuick 2.4
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.3 as QuickControls
import "../stockanalyserCore"
import Material 0.2
import Material.ListItems 0.1 as ListItem

ApplicationWindow {
    id: popup_select_stock
    visible: true

    width: Settings.screenWidth*0.85
    height: Settings.screenHeight*0.85

    theme {
        primaryColor: "blue"
        accentColor: "red"
        tabHighlightColor: "white"
    }

    initialPage: TabbedPage {
        id: popup_select_stock_page
        title: "Add Notification"

        Rectangle {
            id: main_rect
            anchors.fill: parent

            Rectangle{
                id: label_rect
                width: Settings.screenWidth*0.85
                height: Settings.screenHeight*0.85*0.3
                anchors.top: parent.top
                anchors.horizontalCenter: parent.horizontalCenter

                Label {
                    anchors.centerIn: parent
                    text: "Stock Name"
                    color: Theme.light.textColor
                    style: "display1"
                }

                Button {
                    text: "Next >>"
                    anchors.right: parent.right
                    anchors.rightMargin: 6
                    anchors.verticalCenter: parent.verticalCenter
                    elevation: 1
                    activeFocusOnPress: true
                    backgroundColor: Theme.primaryColor
                    onClicked: {
                        var stockname = select_stock.selectedText
                        pageStack.push(Qt.resolvedUrl("popup_select_indicator.qml"),{selected_stock: stockname})
                    }
                }
            }

            MenuField {
                id: select_stock
                anchors.centerIn: parent
                width: 150
                model: ["Stock1", "Stock2", "Stock3", "Stock4"]
            }
        }
    }
}
