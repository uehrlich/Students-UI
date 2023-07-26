import QtQuick

Window {
    height: 300
    title: "Qt Example"
    visible: true
    width: 400

    Text {
        anchors.centerIn: parent
        font.pixelSize: 24
        text: `${foo_from_cpp}`
        //text: msg.author

        //Component.onCompleted: {
           // msg.author = "Jonah";  // invokes Message::setAuthor()
        //}
    }
}
