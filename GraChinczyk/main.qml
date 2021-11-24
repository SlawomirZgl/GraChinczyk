import QtQuick 2.15
import QtQuick.Window 2.15


Window {
    id: root
    width: 800
    height: 800
    visible: true
    title: qsTr("Gra chinczyk")

    Background{
        rotation: 290
        scale: 1.5

    }
    Image {
        id: smok
        anchors.fill: parent
        source: "SmokP.png"
        scale: 0.5
        //opacity: 0.5
    }

    Pole {
        x: 50
        y: 50
        color: "#ff4d4d"
    }
    Pole {
        x: 650
        y: 650
        color: "#ffdd45"
    }
    Pole {
        x: 650
        y: 50
        color: "#73ff70"
    }
    Pole {
        x: 50
        y: 650
        color: "#70a0ff"
    }

}


