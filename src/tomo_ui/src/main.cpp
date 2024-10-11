#include <QApplication>
#include <QElapsedTimer>
#include <QIcon>
#include <QPixmap>
#include <QQmlApplicationEngine>
#include <QQmlContext>
// My include
#include "rclcpp/rclcpp.hpp"
// #include "rviz_common/logging.hpp"

#include "ViewModel/TomoVM/rviz_loader.h"
#include "ViewModel/TomoVM/widgetitem2.h"

int main(int argc, char **argv)
{
      qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

  // remove ROS arguments before passing to QApplication
  std::vector<std::string> non_ros_args = rclcpp::remove_ros_arguments(argc, argv);
  std::vector<char *> non_ros_args_c_strings;
  for (auto & arg : non_ros_args) {
    non_ros_args_c_strings.push_back(&arg.front());
  }
  int non_ros_argc = static_cast<int>(non_ros_args_c_strings.size());
  QApplication qapp(non_ros_argc, non_ros_args_c_strings.data());

  // QApplication qapp( argc, argv );

//   qmlRegisterType<QtQuickOgreRenderWindow>("ros.rviz", 1, 0, "RenderWindow");
  // qmlRegisterType<WidgetItem2>("WidgetItem", 1, 0, "WidgetItem");

  QQmlApplicationEngine engine;
  
  const QUrl url(QStringLiteral("qrc:/main.qml"));

  RvizVM rviz_loader(non_ros_argc, non_ros_args_c_strings, &qapp,nullptr);
  engine.rootContext()->setContextProperty(QStringLiteral("rvizLoader"), &rviz_loader);

    // engine.rootContext()->setContextProperty(QStringLiteral("non_ros_argc"), &non_ros_argc);
    // engine.rootContext()->setContextProperty(QStringLiteral("non_ros_argv"), &non_ros_args_c_strings);

  engine.load(url);
  return qapp.exec();
}