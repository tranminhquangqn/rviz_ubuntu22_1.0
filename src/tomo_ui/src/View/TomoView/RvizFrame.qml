import QtQml 2.2
import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtGraphicalEffects 1.0
import QtQuick.Layouts 1.3

//end

Rectangle{
    id: rvizFrame
    color:"green";
    Component.onCompleted:{
        rvizLoader.initRvizApp(rvizFrame,mainWindow)
    }
    onVisibleChanged:{
        if(visible){
        rvizLoader.showRviz()
        }else{
            rvizLoader.hideRviz()
        }
    }
}