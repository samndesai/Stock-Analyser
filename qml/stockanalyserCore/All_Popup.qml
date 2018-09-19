import QtQuick 2.5
import QtQuick.Window 2.0
import Material 0.2
import Material.ListItems 0.1 as ListItem
import Material.Extras 0.1
import QtQuick.Controls 1.4 as Controls
import QtQuick.Layouts 1.1
import "../stockanalyserCore"

Window {
    id: all_popups_window
    width: 600
    height: 700

    Component {
        id: popupsDelegate
        Item {
            id: popups_list_item
            width: parent.width
            height: Units.dp(50)
            anchors.margins: Units.dp(8)

            ListItem.Standard {

                content: RowLayout {
                    anchors.centerIn: parent
                    spacing: Units.dp(10)
                    width: parent.width
                    Label {
                        id: popups_list_stock
                        style: "title"
                        text: stock
                    }


                    Label {
                        id: popups_list_indicator
                        style: "title"
                        text: indicator
                    }


                    Label {
                        id: popups_list_condition
                        style: "title"
                        text: condition
                    }

                    Label {
                        id: popups_list_threshold
                        style: "title"
                        text: threshold
                    }

                    Button {
                        id: popups_modify
                        text: "Modify"
                        elevation: 1
                        onClicked: {
                            pageStack.push(Qt.resolvedUrl("popup_select_condition.qml"),{selected_stock: stock,selected_indicator: indicator})
                        }
                    }

                    Button {
                        id: popups_dismiss
                        text: "Dismiss"
                        elevation: 1
                        onClicked: _backend.remove_popup_condition(stock,indicator,condition,threshold)
                    }
                }
            }
        }

    }

    Component {
        id: popups_list_header
        RowLayout {
            spacing: Units.dp(10)
            width: parent.width
            Label {
                style: "title"
                text: "Stock"
            }


            Label {
                style: "title"
                text: "Indicator"
            }


            Label {
                style: "title"
                text: "Condition"
            }
        }
    }


    ListView {
        id: popups_list
        anchors.fill: parent
        header: popups_list_header
        model: _backend.allpopupsmodel
        delegate: popupsDelegate
    }

    Button {
        id: add_popup_button
        anchors {
            bottom: parent.bottom
            right: parent.right
            margins: Units.dp(10)
        }

        textColor: "white"
        backgroundColor: Theme.primaryColor
        elevation: 1
        text: "Add Pop-up"

        onClicked: {
            var component = Qt.createComponent("popup_select_stock.qml")
            var window = component.createObject(all_popups_window)
            window.show()
        }
    }

    Snackbar {
        id: snackbar
    }
}
