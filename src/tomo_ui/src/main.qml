import QtQml 2.2
import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtGraphicalEffects 1.0
import QtQuick.Layouts 1.3

//end
import "View/TomoView"

ApplicationWindow {
    id: mainWindow

    // x: 0
    // y: 0
    width: 1000
    height: 800
    // minimumHeight: 1080
    // minimumWidth: 1920
    title: qsTr("TomO SPC v4.0.0")
    // flags: Qt.FramelessWindowHint
    // visibility: Window.Hidden

    visible: true
    onVisibleChanged:{
        if(visible){
            mainWindow.showFullScreen()
        }
    }

    color: "#303030"
    onClosing: {
        close.accepted = false
        rvizLoader.closeRviz()
        close.accepted = true
    }

    RvizFrame{
        id:rvizFrame
        width:parent.width*0.8
        height:parent.height*0.8
    }
    Button{
        anchors.bottom:parent.bottom
        text: rvizLoader.configVisible?"Hide":"Show"
        onClicked:{
            if(rvizLoader.configVisible){
                rvizLoader.hideRviz()
            }else{
                rvizLoader.showRviz()
            }
        }
    }
}
