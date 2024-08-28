import QtQuick 6.7
import QtQuick.Controls 6.7
import UntitledProject1
import QtMultimedia
import QtQuick.Studio.DesignEffects

Rectangle {
    id: rectangle
    width: Constants.width
    height: Constants.height
    color: Constants.backgroundColor

    Rectangle {
        id: rectangle1
        x: 8
        y: 8
        width: 570
        height: 258
        color: "#ffffff"

        Column {
            anchors.centerIn: parent
            spacing: 10

            Text {
                id: timeDisplay
                text: Qt.formatTime(new Date(), "hh:mm:ss")
                font.pixelSize: 150
                font.weight: Font.Light
                anchors.horizontalCenter: parent.horizontalCenter
            }

            Text {
                id: dateDisplay
                text: Qt.formatDate(new Date(), "dddd, MMMM d, yyyy")
                font.pixelSize: 30
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }

        Timer {
            id: timeTimer
            interval: 1000 // Update every second
            running: true
            repeat: true
            onTriggered: timeDisplay.text = Qt.formatTime(new Date(),
                                                          "hh:mm:ss")
        }

        Timer {
            id: dateTimer
            interval: 60000 // Update every minute
            running: true
            repeat: true
            onTriggered: dateDisplay.text = Qt.formatDate(new Date(),
                                                          "dddd, MMMM d, yyyy")
        }
    }

    Rectangle {
        id: rectangle2
        x: 8
        y: 272
        width: 186
        height: 200
        color: "#ffffff"
    }

    Rectangle {
        id: rectangle3
        x: 200
        y: 272
        width: 186
        height: 200
        color: "#ffffff"
    }

    Rectangle {
        id: rectangle4
        x: 392
        y: 272
        width: 186
        height: 200
        color: "#ffffff"
    }

    Rectangle {
        id: rectangle5
        x: 584
        y: 272
        width: 208
        height: 200
        color: "#ffffff"

        MouseArea {
            id: mouseArea
            x: 0
            y: 0
            width: 208
            height: 200
        }
    }

    Rectangle {
        id: rectangle6
        x: 584
        y: 8
        width: 208
        height: 258
        color: "#ffffff"
    }

    states: [
        State {
            name: "clicked"
        }
    ]
}
