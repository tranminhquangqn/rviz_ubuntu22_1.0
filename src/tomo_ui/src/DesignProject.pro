QT += \
    quick \
    core \
    gui \
    concurrent \
    network \
    charts \
    widgets \
    qml

TEMPLATE = app

# Specifies project configuration and compiler options.
# The values are recognized internally by qmake and have special meaning
CONFIG += \

static {
    QT += svg
    QTPLUGIN += qtvirtualkeyboardplugin
}

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    AICore/lens_inspection.cpp \
    Model/TomoModel/mode_model.cpp \
    Model/TomoModel/state_model.cpp \
    Script/Communicate/SimpleAction/bom_action_client.cpp \
    Script/Communicate/SimpleAction/opticspec_action_client.cpp \
    Script/Communicate/SimpleAction/streaming_action_server.cpp \
    Script/Config/cfg_app.cpp \
    Script/Hardware/Printer/printer_interface.cpp \
    ViewModel/ChartVM/chart_vm.cpp \
    ViewModel/DashboardVM/dash_board_vm.cpp \
    ViewModel/TomoVM/Feature/mode_tomo_vm.cpp \
    ViewModel/TomoVM/Feature/state_tomo_vm.cpp \
    ViewModel/TomoVM/tomo_vm.cpp \
    ViewModel/controlbar_vm.cpp \
    ViewModel/idlefilter_vm.cpp \
    ViewModel/image_view_vm.cpp \
    ViewModel/image_writer.cpp \
    ViewModel/login_vm.cpp \
    ViewModel/main_vm.cpp \
    ViewModel/master_app.cpp \
    ViewModel/overlay_shape.cpp \
    ViewModel/systembar_vm.cpp \
    ViewModel/track_vm.cpp \
    ViewModel/OpticspecVM/opticspec_vm.cpp \
    Dialog/modal_dialogbox.cpp \
    Model/image_model.cpp \
    Model/login_model.cpp \
    AICore/inspection_core.cpp \
    ViewModel/OpticspecVM/ControlVideo/read_video.cpp \
    AICore/stream_inspector.cpp \
    AICore/stream_doc.cpp \
    AICore/optispec_inspection.cpp \
    AICore/bom_inspection.cpp \
    ViewModel/BomVM/bom_vm.cpp \
    ViewModel/HeadVM/head_vm.cpp \
    ViewModel/SettingVM/setting_vm.cpp \
    Script/Communicate/TCPIP/tcp_server_handler.cpp \
    Script/Communicate/TCPIP/tcp_server.cpp \
    ViewModel/PopupWindowVM/base_terminal.cpp \
    AICore/optispec_station.cpp \
    AICore/station_core.cpp \
    AICore/tomoeye_station.cpp \
    AICore/tomoeye_inspection.cpp \
    AICore/bom_station.cpp \
    Rviz/myframe.cpp \
    Rviz/myviz.cpp \
    ViewModel/SystemLogVM/base_terminal.cpp \
    ViewModel/SystemLogVM/system_log_vm.cpp \
    ViewModel/OptispecVM/optispec_vm.cpp \
    Rviz/ogre_helpers/arrow.cpp \
    Rviz/ogre_helpers/axes.cpp \
    Rviz/ogre_helpers/billboard_line.cpp \
    Rviz/ogre_helpers/camera_base.cpp \
    Rviz/ogre_helpers/grid.cpp \
    Rviz/ogre_helpers/initialization.cpp \
    Rviz/ogre_helpers/line.cpp \
    Rviz/ogre_helpers/mesh_shape.cpp \
    Rviz/ogre_helpers/movable_text.cpp \
    Rviz/ogre_helpers/object.cpp \
    Rviz/ogre_helpers/ogre_logging.cpp \
    Rviz/ogre_helpers/ogre_render_queue_clearer.cpp \
    Rviz/ogre_helpers/orbit_camera.cpp \
    Rviz/ogre_helpers/orthographic.cpp \
    Rviz/ogre_helpers/point_cloud.cpp \
    Rviz/ogre_helpers/qt_ogre_render_window.cpp \
    Rviz/ogre_helpers/render_system.cpp \
    Rviz/ogre_helpers/render_widget.cpp \
    Rviz/ogre_helpers/shape.cpp \
    Rviz/ogre_helpers/stl_loader.cpp \
    Rviz/panel_factory.cpp \
    Rviz/displays_panel.cpp \
    Rviz/panel_dock_widget.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    AICore/lens_inspection.h \
    Model/TomoModel/mode_model.h \
    Model/TomoModel/state_model.h \
    Script/Communicate/SimpleAction/bom_action_client.h \
    Script/Communicate/SimpleAction/opticspec_action_client.h \
    Script/Communicate/SimpleAction/streaming_action_server.h \
    Script/Config/cfg_app.h \
    Script/Hardware/Printer/printer_interface.h \
    ViewModel/ChartVM/chart_vm.h \
    ViewModel/DashboardVM/dash_board_vm.h \
    ViewModel/TomoVM/Feature/mode_tomo_vm.h \
    ViewModel/TomoVM/Feature/state_tomo_vm.h \
    ViewModel/TomoVM/tomo_vm.h \
    ViewModel/controlbar_vm.h \
    ViewModel/idlefilter_vm.h \
    ViewModel/image_view_vm.h \
    ViewModel/image_writer.h \
    ViewModel/login_vm.h \
    ViewModel/main_vm.h \
    ViewModel/master_app.h \
    ViewModel/overlay_shape.h \
    ViewModel/systembar_vm.h \
    ViewModel/track_vm.h \
    ViewModel/OpticspecVM/opticspec_vm.h \
    Dialog/modal_dialogbox.h \
    Model/image_model.h \
    Model/login_model.h \
    Script/Define/struct_def.h \
    AICore/inspection_core.h \
    ViewModel/OpticspecVM/ControlVideo/read_video.h \
    AICore/stream_inspector.h \
    AICore/stream_doc.h \
    AICore/optispec_inspection.h \
    AICore/bom_inspection.h \
    ViewModel/BomVM/bom_vm.h \
    ViewModel/HeadVM/head_vm.h \
    ViewModel/SettingVM/setting_vm.h \
    Script/Communicate/TCPIP/tcp_server_handler.h \
    Script/Communicate/TCPIP/tcp_server.h \
    ViewModel/PopupWindowVM/base_terminal.h \
    ViewModel/PopupWindowVM/system_log_vm.h \
    AICore/optispec_station.h \
    AICore/station_core.h \
    AICore/tomoeye_station.h \
    AICore/tomoeye_inspection.h \
    AICore/bom_station.h \
    Rviz/myframe.h \
    Rviz/myviz.h \
    ViewModel/SystemLogVM/base_terminal.h \
    ViewModel/SystemLogVM/system_log_vm.h \
    ViewModel/OptispecVM/optispec_vm.h \
    Rviz/ogre_helpers/apply_visibility_bits.h \
    Rviz/ogre_helpers/arrow.h \
    Rviz/ogre_helpers/axes.h \
    Rviz/ogre_helpers/billboard_line.h \
    Rviz/ogre_helpers/camera_base.h \
    Rviz/ogre_helpers/custom_parameter_indices.h \
    Rviz/ogre_helpers/grid.h \
    Rviz/ogre_helpers/initialization.h \
    Rviz/ogre_helpers/line.h \
    Rviz/ogre_helpers/mesh_shape.h \
    Rviz/ogre_helpers/movable_text.h \
    Rviz/ogre_helpers/object.h \
    Rviz/ogre_helpers/ogre_logging.h \
    Rviz/ogre_helpers/ogre_render_queue_clearer.h \
    Rviz/ogre_helpers/orbit_camera.h \
    Rviz/ogre_helpers/orthographic.h \
    Rviz/ogre_helpers/point_cloud.h \
    Rviz/ogre_helpers/qt_ogre_render_window.h \
    Rviz/ogre_helpers/render_system.h \
    Rviz/ogre_helpers/render_widget.h \
    Rviz/ogre_helpers/shape.h \
    Rviz/ogre_helpers/stl_loader.h \
    Rviz/load_resource.h \
    Rviz/panel_factory.h \
    Rviz/displays_panel.h \
    Rviz/panel_dock_widget.h

#---------------------------------------------------------------- My Libary ---------------------------------------------------------#

