import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2

ApplicationWindow
{
    title: qsTr("Hello World")
    width: 640
    height: 480
    visible: true

    MainForm {
        id:form_main
        anchors.fill: parent

        Text
        {
            id:form_main_text
            anchors.centerIn: parent
            text:"This is Main Form!"
        }
    }
}