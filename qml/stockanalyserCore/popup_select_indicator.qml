import QtQuick 2.4
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.3 as QuickControls
import "../stockanalyserCore"
import Material 0.2
import Material.ListItems 0.1 as ListItem

Page {
    id: popup_select_indicator_page
    title: "Add Notification"
    property string selected_stock: "default"

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
                text: "Select an Indicator"
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
                    var selected_indicator = select_indicator.selectedText
                    pageStack.push(Qt.resolvedUrl("popup_select_condition.qml"),{selected_stock: selected_stock,selected_indicator: selected_indicator})
                }
            }
        }

        MenuField {
            id: select_indicator
            anchors.centerIn: parent
            width: 150
            model: ["RSI", "MA", "CCI", "SO"]
        }
    }
}
