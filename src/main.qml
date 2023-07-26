import QtQuick

Window {
    visible: true
    width: 400
    height: 300
    title: "Qt Example"

    Text {
        anchors.centerIn: parent
        text: `i = ${msg}`
        font.pixelSize: 24
    }
}
