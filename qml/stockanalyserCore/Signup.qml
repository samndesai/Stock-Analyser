import QtQuick 2.4
import Material 0.2
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.3 as Controls
import "../stockanalyserCore"

Page{
    id: signup_page
    title:"Sign Up"

    ColumnLayout {

        id: column
        anchors.centerIn: parent
        spacing: Units.dp(32)

        TextField {
            id: firstname
            implicitWidth: 200
            placeholderText: "First Name"
            floatingLabel: true
            anchors.horizontalCenter: parent.horizontalCenter
        }
        TextField {
            id: lastname
            implicitWidth: 200
            placeholderText: "Last Name"
            floatingLabel: true
            anchors.horizontalCenter: parent.horizontalCenter

        }

        TextField {
            id: email
            implicitWidth: 200
            placeholderText: "email"
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

        TextField {
            id: verifyPasswordField
            implicitWidth: 200
            placeholderText: "Verify Password"
            floatingLabel: true
            echoMode: TextInput.Password
            anchors.horizontalCenter: parent.horizontalCenter
        }

        RowLayout{
            id: row
            anchors.top: parent.bottom*0.8
            spacing: Units.dp(32)

            Button {
                property string otp: ""
                text: "Next"
                elevation: 1
                anchors.right: parent.horizontalCenter*0.8
                onClicked: {
                    var valid = _helper.check_valid_detail(firstname.text,lastname.text,email.text,passwordField.text,verifyPasswordField.text)
                    if(valid==0){
                        otp=_frontend.generateOtp();
                        _frontend.sendOTP(email.text,otp);
//                        pageStack.clear();
                        pageStack.pop();
                        pageStack.replace(Qt.resolvedUrl("Verify_Email.qml"),{otp:otp,firstname:firstname.text,lastname:lastname.text,email:email.text,password:passwordField.text})
                    }
                    else if(valid==1){
                        snackbar.open("Invalid firstname");
                    }
                    else if(valid==2){
                        snackbar.open("Invalid lastname");
                    }
                    else if(valid==3){
                        snackbar.open("Invalid email");
                    }
                    else if(valid==4){
                        snackbar.open("Password to short");
                    }
                    else if(valid==5){
                        snackbar.open("Password doesn't match");
                    }
                }
            }

            Button {
                text: "Cancel"
                elevation: 1
                activeFocusOnPress: true
                backgroundColor: Theme.primaryColor
                anchors.left: parent.horizontalCenter*1.2
                onClicked: {
                    pageStack.clear();
                    pageStack.push(Qt.resolvedUrl("Login.qml"));
                }
            }
        }
    }


    Snackbar {
        id: snackbar
    }
}
