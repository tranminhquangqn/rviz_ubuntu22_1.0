
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

class RvizVM : public QObject
{
	Q_OBJECT
	Q_PROPERTY(bool configVisible READ getConfigVisible WRITE setConfigVisible NOTIFY configVisibleChanged)
	Q_PROPERTY(bool isInit READ getIsInit NOTIFY isInitChanged)
	Q_PROPERTY(bool isTempHide READ getIsTempHide)
public:
	// rviz::VisualizationManager* m_manager;
	RvizVM(int& argc, char** argv, QApplication* qapp, QObject* parent)
		: QObject(parent), m_qapp(qapp), m_argc(argc), m_argv(argv), m_configVisible(false), m_isInit(false), m_isTempHide(false)
	{
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
	bool getIsTempHide()
	{
		return m_isTempHide;
	}
	// Q_INVOKABLE void viewDisplay(WidgetItem2* widgetPanel){
	//     widgetPanel->setWidget(m_frame);
	// }
	// Q_INVOKABLE void initRvizApp(rviz::QtQuickOgreRenderWindow* renderWindow, QQuickItem* rvizFrame,QQuickItem* renderPanel)
	// {
	// 	rviz::VisualizerAppMod* widgetRviz = new rviz::VisualizerAppMod();
	// 	widgetRviz->setApp(m_qapp);
	// 	widgetRviz->init(m_argc, m_argv, renderWindow, source_);
	// 	m_frame = widgetRviz->frame_;
	// 	m_vman	= m_frame->getManager();
	// 	connect(m_frame, SIGNAL(frameCloseSignal(bool)), this, SLOT(setConfigVisible(bool)));
	// 	connect(m_qapp, &QApplication::focusWindowChanged, this, &RvizVM::onFocusWindowChanged);
	// 	m_rvizFrame = rvizFrame;
	// 	m_renderPanel = renderPanel;

	// 	// QObject::connect(m_rvizFrame, &QQuickItem::visibleChanged, [=]() {
	// 	//     QPointF globalPosition = m_rvizFrame->mapToGlobal(QPointF(0, 0));
	// 	// 	m_frame->move(globalPosition.x(), globalPosition.y());
	// 	//	m_frame->resize(m_rvizFrame->width(), m_rvizFrame->height());
	// 	// // });
	// 	m_isInit = true;
	// 	Q_EMIT isInitChanged();
	// }
	// Q_INVOKABLE void setRvizGeometry()
	// {
	// 	if(!m_isInit) {
	// 		return;
	// 	}
	// 	QPointF globalPosition = m_rvizFrame->mapToGlobal(QPointF(0, 0));
	// 	m_frame->setGeometry(globalPosition.x()
	// 					,globalPosition.y()
	// 					,m_rvizFrame->width()
	// 					,m_rvizFrame->height());
	// }
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
		{
			if(m_configVisible == value) {
				return;
			}
			m_configVisible = value;
			Q_EMIT configVisibleChanged();
		}
	}
    // void onFocusWindowChanged(QWindow* newWindow)
    // {
	// 	if(!m_isInit){
	// 		return;
	// 	}
	// 	if (!newWindow) {
	// 		hideRviz();
	// 	}
    // }

	// void showRviz()
	// {
	// 	if(!m_isInit) {
	// 		return;
	// 	}
	// 	setRvizGeometry();
	// 	// m_frame->setFixedSize(m_frame->size());
	// 	m_frame->show();
	// 	setConfigVisible(true);
	// 	m_isTempHide=false;
	// }
	// void hideRviz()
	// {
	// 	if(!m_isInit) {
	// 		return;
	// 	}
	// 	m_frame->hide();
	// 	setConfigVisible(false);
	// }
	// void closeRviz()
	// {
	// 	if(!m_isInit) {
	// 		return;
	// 	}
	// 	m_frame->close();
	// }
	// void tempHideRviz()
	// {
	// 	hideRviz();
	// 	m_isTempHide=true;
	// }
	// void checkReShowRviz()
	// {
	// 	if(m_isTempHide && m_renderPanel->isVisible()){
	// 		showRviz();
	// 	}
	// }
Q_SIGNALS:
	void configVisibleChanged();
	void isInitChanged();

private:
	QWidget* widgetWindow				= nullptr;
	QQuickItem* m_rvizFrame				= nullptr;
	QQuickItem* m_renderPanel			= nullptr;
	// rviz::DisplaysPanel* displays_panel = nullptr;

	// rviz::VisualizationManager* m_vman	 = nullptr;
	// rviz::VisualizationFrameMod* m_frame = nullptr;
	// rviz::VisualizerAppMod* widgetRviz	 = nullptr;
	QApplication* m_qapp;
	int m_argc;
	char** m_argv;
	bool m_configVisible;
	bool m_isInit;
	bool m_isTempHide;

	int rvizConfigWid = 1100;
	int rvizConfigHei = 410;

	std::string source_ = getenv("HOME") + std::string("/tomo_config/moveit_ui.rviz");
};
#endif

