import QtQuick 2.15
import QtQuick.Window 2.15

import "GenerowaniePlanszy.js" as Generuj



Rectangle{
    id: root
    width: 900
    height: 900
    Component.onCompleted: Generuj.startNewGame()
    Background{
        rotation: 290
        scale: 1.5
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
        x: startCzerwone.x
        y: startCzerwone.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#8f0c00" }
            GradientStop { position: 0.8; color: "#ff3321" }
        }
    }
    Pionek {
        id: pionekZielony1
        x: startZielone.x
        y: startZielone.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#025400" }
            GradientStop { position: 0.8; color: "#24d620" }
        }
    }
    Pionek {
        id: pionekNiebieski1
        x: startNiebieskie.x
        y: startNiebieskie.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#00025e" }
            GradientStop { position: 0.8; color: "#0062ff" }
        }
    }
    Pionek {
        id: pionekZolty1
        x: startZolte.x
        y: startZolte.y
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#5d5e00" }
            GradientStop { position: 0.8; color: "#fbff00" }
        }
    }

    Baza {
        id: bazaCzerwone
        x: 425
        y: 225
        color: "#ff4d4d"
    }
    Baza {
        id: bazaZolte
        x: 425
        y: 475
        color: "#ffdd45"
    }

    BazaPozioma {
        id: bazaNiebieskie
        x: 225
        y: 425
        color: "#70a0ff"
    }
    BazaPozioma {
        id: bazaZielone
        x: 475
        y: 425
        color: "#73ff70"
    }


    Rectangle {
        id: kostka
        x: parent.width - 100
        y: parent.height / 2
        width: 100
        height: 100
        color: "transparent"
        Text {
            id: liczba
            text: m_kostka.liczba
            font.pointSize: 30
        }
    }
    Button {
        x: kostka.x - 30
        y: kostka.y + 75
        text: "Rzuc kostka"
        onClicked: m_kostka.rzut()
        color: "#FF2313"
    }

    Image {
        id: smok
        anchors.fill: parent
        source: "SmokP.png"
        scale: 0.5
        opacity: 0.7
    }
    Pionek {
        id: piotrek
        x: m_pionekZielony1.x
        y: 325
        z : 1
        width: 50
        gradient: Gradient {
            GradientStop { position: 0.0; color: "#025400" }
            GradientStop { position: 0.8; color: "#24d620" }
        }
    }

}

