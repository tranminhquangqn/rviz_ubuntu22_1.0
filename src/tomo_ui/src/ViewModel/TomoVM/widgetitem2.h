#ifndef WIDGETITEM2_H
#define WIDGETITEM2_H

#include <QQuickPaintedItem>
#include <QWidget>
#include <QPointer>
#include <QPainter>
#include <QTimer>
#include <QPoint>

#include <QWheelEvent>
#include <QDebug>

class WidgetItem2 : public QQuickPaintedItem
{
    Q_OBJECT

public:
    WidgetItem2(QQuickItem* parent = nullptr);
    ~WidgetItem2();

    void setWidget(QWidget* widget);
    Q_INVOKABLE void setItem();
    

    void paint(QPainter* painter) override;

protected:
    void routeMouseEvents( QMouseEvent* event );
    void routeMouseEvents2( QMouseEvent* event );
    void routeKeyEvents( QKeyEvent* event );

    void mousePressEvent(QMouseEvent* event) override;
    void mouseReleaseEvent(QMouseEvent* event) override;
    void mouseMoveEvent(QMouseEvent* event) override;
    void mouseDoubleClickEvent(QMouseEvent* event) override;
    void wheelEvent(QWheelEvent* event) override;

    void keyPressEvent(QKeyEvent *event) override;
    void keyReleaseEvent(QKeyEvent *event) override;
private:
    QWidget* m_widget=nullptr;
    QWidget* child=nullptr;
    QTimer* m_timer;
    QQuickItem *m_parent=nullptr;
public Q_SLOTS:
    void updateWidget();
    void update();
};

#endif // WIDGETITEM2_H
