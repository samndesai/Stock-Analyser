import QtQuick 2.4
import QtQuick.Layouts 1.1
import Material 0.2
import Material.ListItems 0.1 as ListItem
import "../stockanalyserCore"
import QtQuick.Layouts 1.3

Rectangle {
    Flickable {
        id: flickable
        anchors.fill: parent
        contentHeight: 500 //_backend.get_Popup_size()*(Units.dp(12) + 60)


        ListView {
            id: popup_list
            anchors.fill: parent
            model: _backend.trigpopupsmodel
            delegate: popupDelegate
        }


    }

    Component {
        id: popupDelegate
        Rectangle{
            id: rect
            color: "#ecf0f1"
            height: 60
            width: Settings.screenWidth*0.2
            Row {
                Column {
                    anchors.top: parent.top
                    anchors.topMargin: 10

                    Text { text: stock}
                    Text { text: indicator}
                    Text { text: condition + threshold}
                }

                ActionButton {
                    id:showchartbutton
                    isMiniSize: true
                    backgroundColor: "#95a5a6"
                    action: Action {
                        onTriggered: _chartdata.showTrigPopup(stock)
                    }
                    iconName: "action/delete"
                }

                ActionButton {
                    id:modifypopupbutton
                    isMiniSize: true
                    backgroundColor: "#95a5a6"
                    action: Action {
                        //                    id: removeContent
                        onTriggered: snackbar.open("Method to modify popup")
                    }
                    iconName: "action/delete"
                }

                ActionButton {
                    id:deletepopupbutton
                    isMiniSize: true
                    backgroundColor: "#95a5a6"
                    action: Action {
                        //                    id: removeContent
                        onTriggered: _backend.remove_popup_trigger(stock,indicator,condition,threshold)
                    }
                    iconName: "action/delete"
                }
            }
        }
    }

    Scrollbar {
        flickableItem: flickable
    }

    Snackbar {
        id: snackbar
    }
}
