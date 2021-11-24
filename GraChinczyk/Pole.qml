import QtQuick 2.0

Rectangle {
    id: pole
    width: 100
    height: 100
    color: "black"
    Grid{
        columns: 2
        Rectangle{
            id: poleStart1
            width: 50
            height: 50
            color: pole.color
            border.width: 1
        }
        Rectangle{
            id: poleStart2
            width: 50
            height: 50
            color: pole.color
            border.width: 1
        }
        Rectangle{
            id: poleStart3
            width: 50
            height: 50
            color: pole.color
            border.width: 1
        }
        Rectangle{
            id: poleStart4
            width: 50
            height: 50
            color: pole.color
            border.width: 1
        }
    }
}
