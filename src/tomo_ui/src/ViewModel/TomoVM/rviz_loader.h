
#ifndef RVIZVM_H
#define RVIZVM_H

#pragma once
#include <QDebug>
#include <QGuiApplication>
#include <QObject>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <QApplication>
#include <QMainWindow>
#include <QWindow>
#include <QQuickItem>
#include <QQuickWindow>
#include <QWidget>
#include <QWidgetItem>

// #include "rviz/displays_panel.h"
// #include "rviz/visualization_manager.h"

// #include "rviz/ogre_helpers/qt_quick_ogre_render_window.h"
// #include "rviz/quick_visualization_frame.h"
// #include "rviz/visualization_frame_mod.h"
// #include "rviz/visualizer_app_mod.h"
// #include <rviz/window_manager_interface.h>


#include "widgetitem2.h"
#include "rclcpp/rclcpp.hpp"
#include "rviz_common/logging.hpp"
#include "rviz_common/ros_integration/ros_client_abstraction.hpp"

#include "tomo_rviz/visualizer_app_mod.hpp"
#include "tomo_rviz/visualization_frame_mod.hpp"

class RvizVM : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool configVisible READ getConfigVisible WRITE setConfigVisible NOTIFY configVisibleChanged)
	Q_PROPERTY(bool isInit READ getIsInit NOTIFY isInitChanged)
public:
	// rviz::VisualizationManager* m_manager;
	RvizVM(int& argc, std::vector<char *> argv, QApplication* qapp, QObject* parent)
		: QObject(parent), m_qapp(qapp), m_argc(argc), m_argv(argv), m_configVisible(false), m_isInit(false)
	{
		rviz_common::VisualizerAppMod* widgetRviz = new rviz_common::VisualizerAppMod(
			std::make_unique<rviz_common::ros_integration::RosClientAbstraction>());
		widgetRviz->setApp(m_qapp);
		widgetRviz->init(m_argc, m_argv.data());
		m_frame = widgetRviz->getFrame();
		m_frame->setWindowFlags(Qt::Tool|Qt::FramelessWindowHint);

		// m_frame->show();
		// m_vman	= m_frame->getManager();
		connect(m_frame, SIGNAL(frameCloseSignal(bool)), this, SLOT(setConfigVisible(bool)));
	}
	~RvizVM()
	{
		// if(widgetRviz != nullptr) {
		// 	delete widgetRviz;
		// 	widgetRviz = nullptr;
		// }
		// if(m_frame) {
		// 	m_frame->close();
		// }
	}
	bool getConfigVisible()
	{
		return m_configVisible;
	}
	bool getIsInit()
	{
		return m_isInit;
	}
	Q_INVOKABLE void viewDisplay(WidgetItem2* widgetPanel){
	    widgetPanel->setWidget(m_frame);
	}
	Q_INVOKABLE void initRvizApp(QQuickItem* rvizFrame,QQuickWindow* mainWindow)
	{
		m_rvizFrame = rvizFrame;
		m_mainWindow = mainWindow;
	
		QObject::connect(m_rvizFrame, &QQuickItem::widthChanged, [=]() {
		    setRvizGeometry();
		});
		QObject::connect(m_rvizFrame, &QQuickItem::heightChanged, [=]() {
		    setRvizGeometry();
		});
		QObject::connect(m_mainWindow, &QQuickWindow::xChanged, [=]() {
		    setRvizGeometry();
		});
		QObject::connect(m_mainWindow, &QQuickWindow::yChanged, [=]() {
		    setRvizGeometry();
		});
		m_isInit = true;
		Q_EMIT isInitChanged();
		// if(m_rvizFrame->isVisible()){
		// 	showRviz();
		// }
	}
	Q_INVOKABLE void setRvizGeometry()
	{
		if(!m_isInit) {
			return;
		}
		QPointF globalPosition = m_rvizFrame->mapToGlobal(QPointF(0, 0));
		m_frame->setGeometry(globalPosition.x()
						,globalPosition.y()
						,m_rvizFrame->width()
						,m_rvizFrame->height());
	}
	// Q_INVOKABLE void resetRviz()
	// {
	// 	if(!m_isInit) {
	// 		return;
	// 	}
	// 	m_frame->resetRviz();
	// }

public Q_SLOTS:
	void setConfigVisible(bool value)
	{
		qDebug()<<"setConfigVisible"<<value;
		{
			if(m_configVisible == value) {
				return;
			}
			m_configVisible = value;
			Q_EMIT configVisibleChanged();
		}
	}
	void showRviz()
	{
		if(!m_isInit) {
			return;
		}
		setRvizGeometry();
		// m_frame->setFixedSize(m_frame->size());
		m_frame->show();
		setConfigVisible(true);
	}
	void hideRviz()
	{
		if(!m_isInit) {
			return;
		}
		m_frame->hide();
		setConfigVisible(false);
	}
	void closeRviz()
	{
		if(!m_isInit) {
			return;
		}
		m_frame->close();
	}
Q_SIGNALS:
	void configVisibleChanged();
	void isInitChanged();

private:
	QWidget* widgetWindow				= nullptr;
	QQuickItem* m_rvizFrame				= nullptr;
	QQuickWindow* m_mainWindow			= nullptr;
	// rviz::DisplaysPanel* displays_panel = nullptr;

	// rviz_common::VisualizationManager* m_vman	 = nullptr;
	rviz_common::VisualizationFrameMod* m_frame = nullptr;
	// rviz_common::VisualizerAppMod* widgetRviz	 = nullptr;
	QApplication* m_qapp;
	int m_argc;
	std::vector<char *> m_argv;
	bool m_configVisible;
	bool m_isInit;

	int rvizConfigWid = 1100;
	int rvizConfigHei = 410;

	std::string source_ = getenv("HOME") + std::string("/tomo_config/rviz/tomo_moveit.rviz");
};
#endif

