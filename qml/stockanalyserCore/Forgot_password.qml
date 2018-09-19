import QtQuick 2.4
import Material 0.2
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.3 as Controls
import "../stockanalyserCore"

Page{
    id: forgot_password_page
    title: Settings.windowTitle
    property string email: "default"
    property int otp: 000

    Dialog {
        id: forgot_verify_otp
        title: "OTP send to" + email
        hasActions: true

        TextField {
            id: otp_field
            width: parent.width
            placeholderText: "OTP"
        }

        onAccepted: {
            if(otp.toString().match(otp_field.text) && (otp.toString().length===otp_field.text.length))
            {
                new_password_dialog.show()
            }
            else
            {
                dialogSnackBar.open("OTP incorrect")
                forgot_verify_otp.show()
            }
        }
    }

    Dialog {
        id: new_password_dialog
        title: "Enter new Password"
        hasActions: true

        TextField {
            id: new_password
            width: parent.width
            echoMode: TextInput.Password
            placeholderText: "New Password"
        }

        TextField {
            id: new_password_verify
            width: parent.width
            echoMode: TextInput.Password
            placeholderText: "Verify Password"
        }

        onAccepted: {
            if(!new_password.text.localeCompare(new_password_verify.text))
            {
                _helper.change_password(forgot_pass_name.text,new_password.text);
                dialogSnackBar.open("Password Changed")
//                pageStack.clear();
                pageStack.pop();
            }
            else
            {
                dialogSnackBar.open("Password doesn't match")
                new_password_dialog.show()
            }
        }
    }

    Rectangle {
        anchors.fill: parent
        anchors.centerIn: parent

        ColumnLayout {
            anchors.centerIn: parent

            TextField {
                id: forgot_pass_name
                implicitWidth: 200
                placeholderText: "Enter username"
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Row {

                Button {
                    text: "Send OTP"
                    textColor: Theme.accentColor
                    onClicked: {
                        email = _helper.get_user_email(forgot_pass_name.text)
                        if(!email.localeCompare("null"))
                        {
                            dialogSnackBar.open("No user with name " + forgot_pass_name.text)
                        }
                        else
                        {
                            otp = _frontend.generateOtp();
                            _frontend.sendOTP(email,otp);
                            forgot_verify_otp.show()
                        }
                    }
                }

                Button {
                    text: "Cancel"
                    textColor: Theme.accentColor
                    onClicked: {
//                        pageStack.clear()
                        pageStack.pop();
                    }
                }

            }
        }
    }

    Snackbar {
        id: dialogSnackBar
    }
}
