#include <QApplication>
#include <QElapsedTimer>
#include <QIcon>
#include <QPixmap>
#include <QQmlApplicationEngine>
#include <QQmlContext>
// My include
#include "rclcpp/rclcpp.hpp"
// #include "rviz_common/logging.hpp"

int main(int argc, char **argv)
{
      qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));
  QApplication qapp( argc, argv );

//   qmlRegisterType<QtQuickOgreRenderWindow>("ros.rviz", 1, 0, "RenderWindow");
  // qmlRegisterType<WidgetItem2>("WidgetItem", 1, 0, "WidgetItem");

  QQmlApplicationEngine engine;
  
  const QUrl url(QStringLiteral("qrc:/main.qml"));

//   RvizVM rviz_loader(argc, argv, &qapp,nullptr);
//   engine.rootContext()->setContextProperty(QStringLiteral("rvizLoader"), &rviz_loader);

  engine.load(url);
  return qapp.exec();
}