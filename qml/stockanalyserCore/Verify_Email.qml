import QtQuick 2.4
import Material 0.2
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.3 as Controls
import "../stockanalyserCore"

Page {

    property string otp: ""

    //user related properties
    property string firstname: "value"
    property string lastname: "value"
    property string email: "value"
    property string password: "value"


    id:verify_email
    ColumnLayout {

        id: column
        anchors.centerIn: parent
        spacing: Units.dp(32)

        TextField {
            id: otp_field
            implicitWidth: 200
            placeholderText: "Enter OTP"
            floatingLabel: true
            anchors.horizontalCenter: parent.horizontalCenter
            onAccepted: {

            }
        }


        RowLayout{
            id: row
            anchors.top: parent.bottom*0.80
            spacing: Units.dp(32)

            Button {
                text: "Verify"
                elevation: 1
                anchors.right: parent.horizontalCenter*0.8
                onClicked: {
                    if(otp.toString().match(otp_field.text) && (otp.toString().length===otp_field.text.length))
                    {
                        console.log("saving details to file")
                        _userconfig.saveConfig(firstname,lastname,email,password);
//                        pageStack.clear();
                        pageStack.replace(Qt.resolvedUrl("Login.qml"));
                    }
                    else
                    {
                        otp_field.placeholderText="Verification Failed"
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
//                    pageStack.clear();
                    pageStack.replace(Qt.resolvedUrl("Login.qml"));
                }
            }
        }
    }

}



