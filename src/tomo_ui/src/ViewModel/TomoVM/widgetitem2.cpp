#include "widgetitem2.h"
#include <QPainter>
#include <QTimer>
#include <QApplication>
WidgetItem2::WidgetItem2(QQuickItem *parent) : QQuickPaintedItem(parent)
    ,m_parent(parent)

{
    setAcceptHoverEvents(true);
    setActiveFocusOnTab(true);

    setFlag(ItemHasContents, true);
    setFlag(ItemAcceptsInputMethod, true);
    setFlag(ItemIsFocusScope, true);
    setAcceptedMouseButtons(Qt::AllButtons);
    connect(this, &QQuickPaintedItem::widthChanged, this, &WidgetItem2::updateWidget);
    connect(this, &QQuickPaintedItem::heightChanged, this, &WidgetItem2::updateWidget);
}
WidgetItem2::~WidgetItem2(){
    delete m_timer;
}
void WidgetItem2::setItem(){
    qDebug()<<"setItem";
}
void WidgetItem2::setWidget(QWidget *widget)
{


    m_widget = widget;
    if (m_widget)
    {
        child=m_widget;
    //connect(m_widget, &QWidget::update, this, &WidgetItem2::update);
    //connect(m_widget, &QWidget::update, this, &WidgetItem2::updateWidget);
    
    m_timer = new QTimer(this);
    connect(m_timer, &QTimer::timeout, this, &WidgetItem2::update);
    m_timer->start(100);  // 16 for Approximately 60 FPS
    }
    updateWidget();
}

void WidgetItem2::paint(QPainter* painter)
{
    if (m_widget)
    {   
        QPixmap pixmap(boundingRect().size().toSize());
        m_widget->render(&pixmap);
        painter->drawPixmap(0, 0, pixmap);
    }
}

// void WidgetItem2::routeMouseEvents(QMouseEvent* event)
// {
//     if (m_widget) {
//         QPoint widgetPos = event->pos();
//         QWidget* child = m_widget->childAt(widgetPos);
//         if (child) {
//             QPoint childPos = child->mapFrom(m_widget, widgetPos);
//             QMouseEvent* newEvent = new QMouseEvent(event->type(), childPos, event->button(), event->buttons(), event->modifiers());
//             QCoreApplication::postEvent(child, newEvent);
//         } else {
//             QMouseEvent* newEvent = new QMouseEvent(event->type(), widgetPos, event->button(), event->buttons(), event->modifiers());
//             QCoreApplication::postEvent(m_widget, newEvent);
//         }
//     }
// }
void WidgetItem2::routeMouseEvents(QMouseEvent* event)
{
    if (m_widget) {
        QPoint widgetPos = event->pos();
        child = m_widget->childAt(widgetPos);
        child->setFocus();
        if (child) {
            QPoint childPos = child->mapFrom(m_widget, widgetPos);
            QMouseEvent* newEvent = new QMouseEvent(event->type(), childPos, event->button(), event->buttons(), event->modifiers());
            QCoreApplication::postEvent(child, newEvent);
        }
        else {
            QMouseEvent* newEvent = new QMouseEvent(event->type(), widgetPos, event->button(), event->buttons(), event->modifiers());
            QCoreApplication::postEvent(m_widget, newEvent);
        }
    }
}
void WidgetItem2::routeMouseEvents2(QMouseEvent* event)
{
    if (m_widget) {
        QPoint widgetPos = event->pos();
        if (child) {
            QPoint childPos = child->mapFrom(m_widget, widgetPos);
            QMouseEvent* newEvent = new QMouseEvent(event->type(), childPos, event->button(), event->buttons(), event->modifiers());
            QCoreApplication::postEvent(child, newEvent);
        }
        else {
            QMouseEvent* newEvent = new QMouseEvent(event->type(), widgetPos, event->button(), event->buttons(), event->modifiers());
            QCoreApplication::postEvent(m_widget, newEvent);
        }
    }
}

void WidgetItem2::routeKeyEvents(QKeyEvent *event) {
    if (m_widget) {
        if (child) {
        QCoreApplication::sendEvent(child, event);
        }
        else {
        QCoreApplication::sendEvent(m_widget, event);
        }
    }
}
void WidgetItem2::keyPressEvent(QKeyEvent *event)
{
    routeKeyEvents(event);
}
void WidgetItem2::keyReleaseEvent(QKeyEvent *event)
{
    routeKeyEvents(event);
}
void WidgetItem2::mousePressEvent(QMouseEvent *event)
{
    routeMouseEvents(event);
}

void WidgetItem2::mouseReleaseEvent(QMouseEvent *event)
{
    routeMouseEvents(event);
}

void WidgetItem2::mouseMoveEvent( QMouseEvent* event )
{
    routeMouseEvents2( event );
}

void WidgetItem2::mouseDoubleClickEvent( QMouseEvent* event )
{
    routeMouseEvents( event );
}

void WidgetItem2::wheelEvent(QWheelEvent* event)
{
    if (m_widget) {
        QPointF widgetPos = event->pos();
        child = m_widget->childAt(widgetPos.toPoint());
        if (child) {
            QPointF childPos = child->mapFrom(m_widget, widgetPos.toPoint());
            QWheelEvent* newEvent = new QWheelEvent(childPos, event->globalPosF(), event->pixelDelta(), event->angleDelta(), 
                                                    event->delta(), event->orientation(), event->buttons(), event->modifiers(), 
                                                    event->phase(), event->source(), event->inverted());
            QCoreApplication::postEvent(child, newEvent);
        }
        else {
            QWheelEvent* newEvent = new QWheelEvent(widgetPos, event->globalPosF(), event->pixelDelta(), event->angleDelta(), 
                                                    event->delta(), event->orientation(), event->buttons(), event->modifiers(), 
                                                    event->phase(), event->source(), event->inverted());
            QCoreApplication::postEvent(m_widget, newEvent);
        }
    }
}

void WidgetItem2::updateWidget()
{
    if (m_widget)
    {
        m_widget->resize(this->width(), this->height());
        //m_widget->setGeometry(m_parent->x(),m_parent->y(),this->width(),this->height());
        update();
    }
}
void WidgetItem2::update() {
    QQuickPaintedItem::update();
}
