import QtQuick 2.5
import QtQuick.Window 2.0
import Material 0.2


Window{
    id: help_window
    width: 500
    height: 500

    Rectangle {
        anchors.fill: parent
        id: main_rect

        Label {
            id: about_us
            style: "title"
            width: main_rect.width
            text: "This software was developed by members of Team 26 as part
of the course Software Engineering (IT314) offered to B.Tech
 students at DA­IICT."
            anchors.centerIn: parent
        }

        Button {
            id: indicators_button
            text: "Technical Analysics"
            anchors.left: main_rect.left
            anchors.bottom: main_rect.bottom
            anchors.margins: 20
            elevation: 1
            onClicked: Qt.openUrlExternally("Help/Technical Analysis.pdf");
        }

        Button {
            id: usermanual_button
            text: "User Manual"
            anchors.right: main_rect.right
            anchors.bottom: main_rect.bottom
            anchors.margins: 20
            elevation: 1
            onClicked: Qt.openUrlExternally("Help/UserManual.pdf");
        }
    }
}
