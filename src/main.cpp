#include <QGuiApplication>
#include <QUrl>

#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "Student.h"
#include <iostream>
#include <string>
using namespace  std;
int main(int argc, char *argv[])
{
    int ID,numOfGrade;
    string name;
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("/home/almog/CLionProjects/Students-UI/src/main.qml")));
    cout <<"Please enter ID, name, and the amount of grade-  /n";
    cin >> ID,name,numOfGrade;
    auto stu = Student(ID,name,numOfGrade);

    //Query the database
    string msg ="";
    for (const auto &item: stu.GetGrade()) {
       msg+="/n "+item;
    }
    auto a = engine.rootContext();
    int i=9;
    a->setContextProperty("i", i);
    return app.exec();
}
