import QtQuick 2.0

Rectangle {
    width: 50
    height: 50
    color: "white"
    border.width: 1
    MouseArea{
        anchors.fill: parent
        onClicked: console.log("aaaa")
    }
}
