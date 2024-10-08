import QtQml 2.2
import QtQuick 2.9
import QtQuick.Window 2.2
import QtQuick.Controls 2.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Material 2.2

//My import
import "Component"
import "Component/MaterialDesign"
import "View/SystemLogView"
//end
Column{
    property color _borderColorBtn: "#a9a9a9"
    property color _bgColorBtn: "#4A4A4A"
    property var _btnSize: 37
    property var dict_button_control_overlay:{ "OVERLAY_BTN": 0, "DEFECT_BTN": 1,
                                                "OVERKILL_BTN": 2, "TRACKING_BTN":3
    }

    Column{
        id: systemBar
        height: implicitHeight
        width: parent.width
        spacing: 10

        Item {
            width: parent.width
            height: 1
        }

        // system log
        Rectangle{
            id: system_log_area
            width: _btnSize
            height: systemlog_btn.height +5
            border.color: _borderColorBtn
            border.width: 2
            color:_bgColorBtn
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 5
            //init systemLog
            property var wnd: undefined
            property string windowSource: "qrc:/View/SystemLogView/SystemLogView.qml"
            property int orginal_main_view_layout_height: 0
            
            ButtonMaterial{
                id:systemlog_btn
                opacity: enabled? 1.0 : 0.2
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                _width: parent.width-5
                _height: _width
                _size: _width
                _iconSourceOff: "console"
                onClicked: {loginVM.updateIdleTimer()
                    if(system_log_area.wnd === undefined) return;
                    systemLogVM.systemLogClicked(system_log_area.wnd.visible)
                }
                ToolTip{
                    text:"System log"
                }
            }
            Timer {
                id: timer
            }
            function delay(delayTime, cb) {
                timer.interval = delayTime;
                timer.repeat = false;
                timer.triggered.connect(cb);
                timer.start();
            }
            Connections{
                target:mainVM
                ignoreUnknownSignals: true
                function onSignalUICompleted() {
                    system_log_area.delay(100, function() {
                        if(system_log_area.wnd === undefined){
                            var component = Qt.createComponent(system_log_area.windowSource)
                            if( component.status !== Component.Ready ){
                                if( component.status === Component.Error ) {
                                    console.debug("Error created window:"+ component.errorString());
                                    return;
                                }
                                else return;
                            }
                                // keep org height of main view layout
                                system_log_area.orginal_main_view_layout_height = main_view_layout.height

                                var x_init = control_bar_layout.width
                                var width_init = main_view_layout.width + 12

                                system_log_area.wnd = component.createObject(mainWindow,{
                                                    x: x_init,
                                                    width: width_init,
                                                    _enabled: main_view_layout.enabled,
                                                    main_view_layout_object: mainViewItem,
                                                });

                                system_log_area.wnd.hide();
                                systemLogVM.uiCreatedComplete();
                                system_log_area.wnd.closing.connect(function() {
                                system_log_area.wnd = undefined;
                            });
                        }
                    })
                }
            }
        }
        // Statistics
        Rectangle{
            id: statistics_btn_area
            width: _btnSize
            height: statistics_btn.height+5
            border.color: _borderColorBtn
            border.width: 2
            color:_bgColorBtn
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 5
            ButtonMaterial{
                id: statistics_btn
                opacity: enabled? 1.0 : 0.2
                _width: parent.width-5
                _height:_width
                _size: _width
                _iconSourceOn: "chart-line"
                _iconSourceOff: ""
                anchors.centerIn: parent
                onClicked: {loginVM.updateIdleTimer()
                    system_status_layout.statisticBtnClicked()
                }

                TooltipWindow{
                    _textTooltip:"Statistics"
                    _visible:statistics_btn.hovered
                    x:mainWindow.x+mainWindow.width-systemBar.width-width
                    y:mainWindow.y+statistics_btn_area.y
                }
            }
        }

        // overlay on/off
        Rectangle{
            id: overlay_btn_area
            width: _btnSize
            height: overlay_btn.height+5
            border.color: _borderColorBtn
            border.width: 2
            color:_bgColorBtn
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 5
            ButtonMaterial{
                id: overlay_btn
                property alias _activate_alias: overlay_btn._isClicked

                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                anchors.verticalCenterOffset: -1
                _width: parent.width-6
                _height: _width
                _size: _width
                _iconSourceOn: "eye"
                _iconSourceOff: "eye-off"
                _isToggleButton: true
                onClicked: {loginVM.updateIdleTimer()
                    _isClicked = !_isClicked
                    systemBarVM.changedStatusButton(dict_button_control_overlay["OVERLAY_BTN"], _isClicked)
                    if(_isClicked){
                        defect_btn._isClicked = true
                        overkill_btn._isClicked = true
                        tracking_btn._isClicked = true

                        systemBarVM.changedStatusButton(dict_button_control_overlay["DEFECT_BTN"], true)
                        systemBarVM.changedStatusButton(dict_button_control_overlay["OVERKILL_BTN"], true)
                        systemBarVM.changedStatusButton(dict_button_control_overlay["TRACKING_BTN"], true)
                    }
                    else{
                        defect_btn._isClicked = false
                        overkill_btn._isClicked = false
                        tracking_btn._isClicked = false

                        systemBarVM.changedStatusButton(dict_button_control_overlay["DEFECT_BTN"], false)
                        systemBarVM.changedStatusButton(dict_button_control_overlay["OVERKILL_BTN"], false)
                        systemBarVM.changedStatusButton(dict_button_control_overlay["TRACKING_BTN"], false)
                    }
                }

                TooltipWindow{
                    _textTooltip:"Overlay"
                    _visible:overlay_btn.hovered
                    x:mainWindow.x+mainWindow.width-systemBar.width-width
                    y:mainWindow.y+overlay_btn_area.y
                }
                Connections{
                    target: master_app
                    ignoreUnknownSignals: true
                    function onInitAllOverlayBtn(value) {
                        overlay_btn._isClicked = value
                        systemBarVM.changedStatusButton(dict_button_control_overlay["OVERLAY_BTN"], overlay_btn._isClicked)
                    }
                }
            }
        }
        // defect on/off
        Rectangle{
            id: defect_btn_area
            width: _btnSize
            height: defect_btn.height +5
            border.color: _borderColorBtn
            border.width: 2
            color:_bgColorBtn
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 5
            ButtonMaterial{
                id: defect_btn
                opacity: enabled? 1.0 : 0.2
                enabled: overlay_btn._activate_alias
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                _width: parent.width-5
                _height: _width
                _size: _width
                _iconSourceOn: "select"
                _iconSourceOff: "select-off"
                _isToggleButton: true
                onClicked: {loginVM.updateIdleTimer()
                    _isClicked = !_isClicked
                    systemBarVM.changedStatusButton(dict_button_control_overlay["DEFECT_BTN"], _isClicked)
                }
                TooltipWindow{
                    _textTooltip:"Defect"
                    _visible:defect_btn.hovered
                    x:mainWindow.x+mainWindow.width-systemBar.width-width
                    y:mainWindow.y+defect_btn_area.y
                }
                Connections{
                    target: master_app
                    ignoreUnknownSignals: true
                    function onInitDefectBtn(value) {
                        defect_btn._isClicked = value
                        systemBarVM.changedStatusButton(dict_button_control_overlay["DEFECT_BTN"], defect_btn._isClicked)
                    }
                }
            }
        }
        // overkill on/off
        Rectangle{
            id: overkill_btn_area
            width: _btnSize
            height: overkill_btn.height +5
            border.color: _borderColorBtn
            border.width: 2
            color:_bgColorBtn
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 5
            ButtonMaterial{
                id:overkill_btn
                opacity: enabled? 1.0 : 0.2
                enabled: overlay_btn._activate_alias
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                _width: parent.width-5
                _height: _width
                _size: _width
                _iconSourceOn: "progress-download"
                _iconSourceOff: "progress-upload"
                _isToggleButton: true
                onClicked: {loginVM.updateIdleTimer()
                    _isClicked = !_isClicked
                    systemBarVM.changedStatusButton(dict_button_control_overlay["OVERKILL_BTN"], _isClicked)
                }

                TooltipWindow{
                    _textTooltip:"Overkill"
                    _visible:overkill_btn.hovered
                    x:mainWindow.x+mainWindow.width-systemBar.width-width
                    y:mainWindow.y+overkill_btn_area.y
                }

                Connections{
                    target: master_app
                    ignoreUnknownSignals: true
                    function onInitOverKillBtn(value) {
                        overkill_btn._isClicked = value
                        systemBarVM.changedStatusButton(dict_button_control_overlay["OVERKILL_BTN"], defect_btn._isClicked)
                    }
                }
            }
        }
        // tracking on//off
        Rectangle{
            id: tracking_btn_area
            width: _btnSize
            height: tracking_btn.height+5
            border.color: _borderColorBtn
            border.width: 2
            color:_bgColorBtn
            anchors.horizontalCenter: parent.horizontalCenter
            radius: 5
            ButtonMaterial{
                id:tracking_btn
                opacity: enabled? 1.0 : 0.2
                enabled: overlay_btn._activate_alias
                anchors.horizontalCenter: parent.horizontalCenter
                anchors.verticalCenter: parent.verticalCenter
                _width: parent.width-5
                _height: _width
                _size: _width
                _iconSourceOn: "star"
                _iconSourceOff: "star-off"
                _isToggleButton: true

                onClicked: {loginVM.updateIdleTimer()
                    _isClicked = !_isClicked
                    systemBarVM.changedStatusButton(dict_button_control_overlay["TRACKING_BTN"], _isClicked)
                }

                TooltipWindow{
                    _textTooltip:"Tracking"
                    _visible:tracking_btn.hovered
                    x:mainWindow.x+mainWindow.width-systemBar.width-width
                    y:mainWindow.y+tracking_btn_area.y
                }
                Connections{
                    target: master_app
                    ignoreUnknownSignals: true
                    function onInitTrackingBtn(value) {
                        tracking_btn._isClicked = value
                        systemBarVM.changedStatusButton(dict_button_control_overlay["TRACKING_BTN"], tracking_btn._isClicked)
                    }
                }
            }
        }
    }

    Column{
        id:systemBarFoot
        anchors.bottom: parent.bottom
        anchors.bottomMargin: spacing
        height: implicitHeight
        width: parent.width
        spacing: 10

    // separator
        Item{
            width: parent.width
            height: 20
            Rectangle{
                width: parent.width*0.8
                height: 3
                color: "gray"
                radius: height/2
                anchors.centerIn: parent
            }
        }


    // status icon
    MaterialDesignIcon{
        id: tomoControl_icon
        name:"robot"
        size: 32
        anchors.horizontalCenter: parent.horizontalCenter
        Component.onCompleted: {color= "red"}

        TooltipWindow{
            _textTooltip:"TomO Control"
            _visible:icon_tomo_control_mouse_area.containsMouse
            x:mainWindow.x+mainWindow.width-systemBar.width-width
            y:mainWindow.y+systemBarFoot.y+tomoControl_icon.y
        }
        MouseArea{
            id: icon_tomo_control_mouse_area
            anchors.fill: parent
            hoverEnabled: true
        }

        Connections{
            target: tomoVM
            ignoreUnknownSignals: true
            function onSetStateConnectionTomOControl(value) {
                    tomoControl_icon.color = value ? "green" : "red"
            }
        }
    }
    MaterialDesignIcon{
        id: tomoInmaging_icon
        name:"robot-vacuum"
        size: 32
        anchors.horizontalCenter: parent.horizontalCenter
        Component.onCompleted: {color= "red"}
        TooltipWindow{
            _textTooltip:"TomO Imaging"
            _visible:icon_tomo_imaging_mouse_area.containsMouse
            x:mainWindow.x+mainWindow.width-systemBar.width-width
            y:mainWindow.y+systemBarFoot.y+tomoInmaging_icon.y
        }
        MouseArea{
            id: icon_tomo_imaging_mouse_area
            anchors.fill: parent
            hoverEnabled: true
        }

        Connections{
            target: headVM
            ignoreUnknownSignals: true
            function onSetStateConnectionTomOImaging(value) {
                    tomoInmaging_icon.color = value ? "green" : "red"
            }
        }
    }
    MaterialDesignIcon{
        id: tomoOptic_icon
        name:"lan-connect"
        size: 32
        anchors.horizontalCenter: parent.horizontalCenter
        Component.onCompleted: {color= "red"}
        TooltipWindow{
            _textTooltip:"TomO Optic"
            _visible:icon_tomo_optic_mouse_area.containsMouse
            x:mainWindow.x+mainWindow.width-systemBar.width-width
            y:mainWindow.y+systemBarFoot.y+tomoOptic_icon.y
        }
        MouseArea{
            id: icon_tomo_optic_mouse_area
            anchors.fill: parent
            hoverEnabled: true
        }
        Connections{
            target: typeof optispecVM === 'undefined' ? null : optispecVM
            ignoreUnknownSignals: true
            function onSetStateConnectionTomOOptic(value) {
                    tomoOptic_icon.color = value ? "green" : "red"
            }
        }
    }
}
}
