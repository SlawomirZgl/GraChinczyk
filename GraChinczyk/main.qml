import QtQuick 2.15
import QtQuick.Window 2.15

import "GenerowaniePlanszy.js" as Generuj

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
    Rectangle{
        id: background
        anchors.fill: parent
        color: "transparent"

    }

    Image {
        id: smok
        anchors.fill: parent
        source: "SmokP.png"
        //scale: 0.5
        //opacity: 0.5
    }

    PoleStartowe {
        id: startCzerwone
        x: 50
        y: 50
        color: "#ff4d4d"
    }
    PoleStartowe {
        id: startZolte
        x: root.width - 150
        y: root.height - 150
        color: "#ffdd45"
    }
    PoleStartowe {
        id: startZielone
        x: root.width - 150
        y: 50
        color: "#73ff70"
    }
    PoleStartowe {
        id: startNiebieskie
        x: 50
        y: root.height - 150
        color: "#70a0ff"
    }

    Pionek {
        id: pionekCzerwony1
        x: 200 //startCzerwone.x
        y: 100 //startCzerwone.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#8f0c00" }
            GradientStop { position: 0.8; color: "#ff3321" }
        }
    }
    Pionek {
        id: pionekZielony1
        x: 250
        y: 100
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#025400" }
            GradientStop { position: 0.8; color: "#24d620" }
        }
    }
    Pionek {
        id: pionekNiebieski1
        x: 300
        y: 100
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#00025e" }
            GradientStop { position: 0.8; color: "#0062ff" }
        }
    }
    Pionek {
        id: pionekZolty1
        x: 350
        y: 100
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#5d5e00" }
            GradientStop { position: 0.8; color: "#fbff00" }
        }
    }

    Button {
        anchors { left: parent.left; verticalCenter: parent.verticalCenter }
        text: "New Game"
        onClicked: Generuj.startNewGame()
    }


}


