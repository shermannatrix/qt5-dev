import QtQuick 2.4

Item {
    width: 400
    height: 400
    property alias rectangle: rectangle
    property alias mouseArea: mouseArea

    Rectangle {
        id: rectangle
        color: "#e20000"
        anchors.fill: parent

        MouseArea {
            id: mouseArea
            anchors.fill: parent
        }
    }
}

/*##^##
Designer {
    D{i:2;anchors_height:100;anchors_width:100;anchors_x:150;anchors_y:150}D{i:1;anchors_height:200;anchors_width:200;anchors_x:100;anchors_y:100}
}
##^##*/
