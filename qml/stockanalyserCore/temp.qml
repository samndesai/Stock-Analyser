import QtQuick 2.4
import Material 0.2
import Material.ListItems 0.1 as ListItem

Page {
    id: page
    title: "Page with right sidebar"

    actions: [
        Action {
            iconName: "action/search"
            text: "Search"
        }
    ]

    Button {
        anchors.centerIn: parent
        text: "Sub page"
        onClicked: pageStack.push(Qt.resolvedUrl("SubPage.qml"))
    }

    rightSidebar: PageSidebar {
        title: "Sidebar"

        width: Units.dp(320)

        actions: [
            Action {
                iconName: "action/delete"
                text: "Delete"
            }
        ]
    }
}
