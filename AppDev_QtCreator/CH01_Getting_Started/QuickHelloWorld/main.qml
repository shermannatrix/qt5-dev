import QtQuick 2.15
import QtQml.Models 2.12
import QtQuick.Window 2.15


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    MyGuiForm {
        anchors.fill: parent
        mouseArea.onClicked: {
            rectangle.color = "blue";
        }
    }
}
