import QtQuick 2.0
import QtQuick.Window 2.2
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
import QtCharts 2.1

import MqttClient 1.0
import "../../Component/Common"
import "../../Component"
import QmlCustomItem 1.0

QRec{
    id: homeScreen
    color: CONST.COLOR_BACK_GROUND

    Column {
        id: columnHome
        anchors.fill: parent
        anchors.margins: 12
        spacing: 10
        Row {
            id: rowSensor
            Label {
                id: sensorNode
                text: "Sensor Node: "
                anchors.verticalCenter: parent.verticalCenter
                font.pointSize: 18
            }
            TextField {
                id: sensorNodeTitleField
                text: "Sensor1"
                clip: true
                verticalAlignment: Text.AlignVCenter
            }
        }
        Row {
            Label {
                id: message
                text: "Message:         "
                anchors.verticalCenter: parent.verticalCenter
                font.pointSize: 18
            }
            TextField {
                id: inputText
                text: "Hello"
            }
        }
        Label {
            text: "Chart view: "
            font.pointSize: 18
        }
        ChartView{
            id: chartViewTemp
            height: 250
            width: 575
            theme: ChartView.ChartThemeDark
            anchors.horizontalCenter: parent.horizontalCenter

            animationOptions: ChartView.NoAnimation
            property bool openGL: false
            property bool openGLSupported: false
            property int tempSamples : 0
            property bool firstTemp : true

            function tempMessage(payload)
            {
                if (tempSamples <= 100){
                    if (firstTemp){
                        timeAxisTemp.min = new Date()
                        firstTemp = false
                    }
                    timeAxisTemp.max = new Date()
                    tempSeries.append(new Date(),payload)
                    tempSamples++
                }else{
                    tempSeries.remove(0)
                    timeAxisTemp.min = new Date(tempSeries.at(0).x)
                    timeAxisTemp.max = new Date()
                    tempSeries.append(new Date(),payload)
                }
            }

            ValueAxis{
                id: axisTemp
                min: 0
                max: 100
            }

            DateTimeAxis{
                id: timeAxisTemp
                format: "hh:mm"
            }

            SplineSeries{
                name: "Temperature"
                id:tempSeries
                useOpenGL: true
                axisY: axisTemp
                axisX: timeAxisTemp
            }

            Connections{
                target: AppModel
                function onSensorMessChanged(msg){
                    var temp = msg;
                    console.log(temp);

                    chartViewTemp.tempMessage(temp)
                }
            }
        }
        Row{
            id: rowTwo
            spacing: 10
            ChartView{
                id: chartViewHumty
                height: 250
                width: 575
                theme: ChartView.ChartThemeDark

                animationOptions: ChartView.NoAnimation
                property bool openGL: false
                property bool openGLSupported: false
                property int humtySamples : 0
                property bool firstHumty : true

                function humtyMessage(payload)
                {
                    if (humtySamples <= 100){
                        if (firstHumty){
                            timeAxisHumty.min = new Date()
                            firstHumty = false
                        }
                        timeAxisHumty.max = new Date()
                        humtySeries.append(new Date(),payload)
                        humtySamples++
                    }else{
                        humtySeries.remove(0)
                        timeAxisHumty.min = new Date(humtySeries.at(0).x)
                        timeAxisHumty.max = new Date()
                        humtySeries.append(new Date(),payload)
                    }

                }

                ValueAxis{
                    id: axisHumty
                    min: 0
                    max: 100
                }

                DateTimeAxis{
                    id: timeAxisHumty
                    format: "hh:mm"
                }

                SplineSeries{
                    name: "Humty"
                    color: "red"
                    id:humtySeries
                    useOpenGL: true
                    axisY: axisHumty
                    axisX: timeAxisHumty
                }
                Connections{
                    target: AppModel
                    function onSensorMessChanged(msg){
                        var temp = msg;
                        console.log(temp);

                        chartViewHumty.humtyMessage(temp)
                    }
                }
            }
            ChartView{
                id: chartViewLux
                height: 250
                width: 575
                theme: ChartView.ChartThemeDark

                animationOptions: ChartView.NoAnimation
                property bool openGL: false
                property bool openGLSupported: false
                property int luxSamples : 0
                property bool firstLux : true

                function luxMessage(payload)
                {
                    if (luxSamples <= 100){
                        if (firstLux){
                            timeAxisLux.min = new Date()
                            firstLux = false
                        }
                        timeAxisLux.max = new Date()
                        luxSeries.append(new Date(),payload)
                        humtySamples++
                    }else{
                        luxSeries.remove(0)
                        timeAxisLux.min = new Date(humtySeries.at(0).x)
                        timeAxisLux.max = new Date()
                        luxSeries.append(new Date(),payload)
                    }
                }

                ValueAxis{
                    id: axisLux
                    min: 0
                    max: 100
                }

                DateTimeAxis{
                    id: timeAxisLux
                    format: "hh:mm"
                }

                SplineSeries{
                    name: "Illuminance"
                    color: "blue"
                    id:luxSeries
                    useOpenGL: true
                    axisY: axisLux
                    axisX: timeAxisLux
                }
                Connections{
                    target: AppModel
                    function onSensorMessChanged(msg){
                        var temp = msg;
                        console.log(temp);

                        chartViewLux.luxMessage(temp)
                    }
                }
            }
        }
    }
}


