import QtQuick 2.4
import Material 0.2
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.3 as Controls
import "../stockanalyserCore"

Page {
    id: login_page
    title: Settings.windowTitle

//    signal activated
    property string account_username: "value"
    ColumnLayout {

        id: column
        anchors.centerIn: parent
        spacing: Units.dp(32)

        TextField {
            id: username
            implicitWidth: 200
            placeholderText: "Username"
            floatingLabel: true
            anchors.horizontalCenter: parent.horizontalCenter
        }

        TextField {
            id: passwordField
            implicitWidth: 200
            placeholderText: "Password"
            floatingLabel: true
            echoMode: TextInput.Password
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Button {
            text: "Forgot Password"
            textColor: Theme.accentColor
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: pageStack.push(Qt.resolvedUrl("Forgot_password.qml"))
        }

        RowLayout{
            id: row
            anchors.top: parent.bottom
            spacing: Units.dp(32)

            Button {
                text: "SignUp"
                elevation: 1
                anchors.right: parent.horizontalCenter
                anchors.rightMargin: 15
                onClicked: {
                    pageStack.push(Qt.resolvedUrl("Signup.qml"))
                }
            }

            Button {
                text: "Login"
                elevation: 1
                activeFocusOnPress: true
                backgroundColor: Theme.primaryColor
                anchors.left: parent.horizontalCenter
                anchors.leftMargin: 15
                onClicked: {
                    var result = _helper.verify_user_password(username.text, passwordField.text)
                    console.log(result);
                    if(result == true){
                        Settings.username = username.text
                        pageStack.replace(Qt.resolvedUrl("Central_window.qml"))
                    }
                    else
                        snackbar.open("Invalid username and password")
                }
            }
        }
    }

    Snackbar {
        id: snackbar
    }
}
