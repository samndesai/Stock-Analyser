import QtQuick 2.4
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.3 as QuickControls
import "../stockanalyserCore"
import Material 0.2
import Material.ListItems 0.1 as ListItem

Page {
    id: popup_select_indicator_page
    title: "Add Notification"

    property string selected_stock: "stock"
    property string selected_indicator: "indicator"

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
                anchors.top: parent.top
                text: "Select conditions for " + selected_indicator
                color: Theme.light.textColor
                style: "display1"
            }

            Button {
                text: "Done"
                anchors.right: parent.right
                anchors.rightMargin: 6
                anchors.verticalCenter: parent.verticalCenter
                elevation: 1
                activeFocusOnPress: true
                backgroundColor: Theme.primaryColor
                onClicked: {
//                    console.log(select_condition.selectedText)
//                    console.log(select_threshold.text)
                    _backend.add_popup_condition(selected_stock,selected_indicator,select_condition.selectedText,select_threshold.text);
                    popup_select_stock.close()
                }
            }
        }
        Row {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            MenuField {
                id: select_condition
                width: 30
                model: [">", "<"]
            }

            TextField {
                id: select_threshold
                placeholderText: "Threshold"
            }

        }
    }
}
