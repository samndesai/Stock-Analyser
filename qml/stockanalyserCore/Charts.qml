import QtQuick 2.4
import QtQuick.Layouts 1.1
import QtWebEngine 1.2
import "../stockanalyserCore"
//import QtWebChannel 1.0

//import QtQuick.Layouts 1.1
//import Qt.WebSockets 1.0

//import "javascriptFiles/main.js" as Mainjs

Rectangle {
    id: chart

//    QtObject {
//        id: myObject

//        // the identifier under which this object
//        // will be known on the JavaScript side
//        WebChannel.id: "foo"

//        function someMethod(message) {
//            console.log(message);
//            return "foobar";
//        }
//    }

//    WebSocket {
//        id: socket

//        url: "ws://localhost:12345";
//        active: false

//        // the following three properties/functions are required to align the QML WebSocket API with the HTML5 WebSocket API.
//        property var send: function (arg) {
//            sendTextMessage(arg);
//        }

//        onTextMessageReceived: {
//            onmessage({data: message});
//        }
//        property var onmessage;

//        onStatusChanged: if (socket.status == WebSocket.Error) {
//                             console.error("Error: " + socket.errorString)
//                         } else if (socket.status == WebSocket.Closed) {
//                             messageBox.text += "\nSocket closed"
//                         } else if (socket.status == WebSocket.Open) {
//                             //open the webchannel with the socket as transport
//                         }
//    }

//    Canvas {
//        id: canvas
//        anchors.fill: parent
//        onPaint: {
//            var ctx = getContext("2d");
//            Mainjs.drawGraph(ctx);
//        }
//    }

    Component.onCompleted: {
        _chartdata.setWH(Settings.screenWidth*0.8,Settings.screenHeight*0.8);
    }

    WebEngineView {
            id: webview
            anchors.fill: parent
            anchors.centerIn: parent
            url: "../stockanalyserCore/javascriptFiles/index.html"
//            userScripts: WebEngineScript{
//                sourceUrl: "../stockanalyserCore/javascriptFiles/main.js"
//                worldId: WebEngineScript.MainWorld
//            }
        }
}
