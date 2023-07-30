import QtQuick
import QtQuick.Controls
import QtQuick.Layouts
import App

ApplicationWindow {
    property Student student: Student {}


    height: 300
    title: "Qt Example"
    visible: true
    width: 400

    TextInput {
        anchors.centerIn: parent
        font.pixelSize: 24
        text: `name = ${student.name}`
    }
    ListView {
        id: listView

        anchors.fill: parent
        anchors.margins: 10
        model: Student{}

        delegate: RowLayout {
            id: currentStudent

            width: ListView.width

            TextField {
                text: `grade = ${model.grade}`

            }
            // Text {
            //     text: model.grades
            // }

        }
    }

        footer: RowLayout {
        TextField {
            id : appendBtn
            text :"enter a garde"

        }
    Button {

        text: "Append"
        onClicked: listView.model.append(appendBtn.text)
    }
    Button {
        text: "Remove last"

        onClicked: listView.model.removeLast()
    }
    Button {
        text: "Clear"

        onClicked: listView.model.clear()
    }}
}
