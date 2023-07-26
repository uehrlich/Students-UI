#include <QGuiApplication>
#include <QUrl>
#include "student.hpp"
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <filesystem>
#include <QString>
#include <vector>
#include "message.hpp"


int main(int argc, char *argv[])
{
    Student st = *new Student("Uri", {100,100,100});

    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;
    Message msg;

    auto main_qml  = fs::path(__FILE__).parent_path() / "main.qml";
    engine.load(QUrl(main_qml.c_str()));
   const QString foo = "hello from C++";
    engine.rootContext()->setContextProperty("foo_from_cpp", foo);
   // engine.rootContext()->setContextProperty("msg", &msg);
    return app.exec();
}
