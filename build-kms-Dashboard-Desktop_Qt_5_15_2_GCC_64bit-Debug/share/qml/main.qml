import QtQuick 2.12
import QtQuick.Window 2.12

import QmlCustomItem 1.0

Window
{
    id: root

    width: CONST.MAX_WIDTH
    height: CONST.MAX_HEIGHT
    maximumHeight: height
    maximumWidth: width
    minimumHeight: height
    minimumWidth: width

    visible: true

    Loader {
        id: screenLoader
        visible: true
        property int loginStatus: AppModel.loginStatus
        anchors.fill: parent
        onLoginStatusChanged: source = getScreenUrl(loginStatus)
        Component.onCompleted: {
            source = getScreenUrl(loginStatus)
        }
    }

//    Loader
//    {
//        anchors.fill: parent
//        source: SCREEN.QML_LOGIN_SCREEN
//    }

    function getScreenUrl(id){
        if(id) {
            return SCREEN.QML_MAIN_SCREEN
        }
        else
        {
            return SCREEN.QML_LOGIN_SCREEN
        }
    }


    // Run after recieve signal login successful
//    Loader
//    {
//        anchors.fill: parent
//        source: SCREEN.QML_MAIN_SCREEN
//    }

}
