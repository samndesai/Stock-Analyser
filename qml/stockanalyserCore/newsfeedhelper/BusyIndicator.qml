import QtQuick 2.5

Image {
    id: container

    source: "busy.png";
    NumberAnimation on rotation {
        running: container.visible
        from: 0; to: 360;
        loops: Animation.Infinite;
        duration: 1200
    }
}
