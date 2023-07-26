#include <QGuiApplication>
#include <QUrl>
#include "student.hpp"
#include <QQmlApplicationEngine>
#include <QQmlContext>

//
// Created by tzevet5-dev on 7/26/23.
//

#ifndef MYQTPROJECT_MESSAGE_H
#define MYQTPROJECT_MESSAGE_H


namespace fs = std::filesystem;

class Bar : public QObject {
    Q_OBJECT
    Q_PROPERTY(Foo::Enum enum READ enum WRITE setEnum NOTIFY enumChanged)
};

class Message : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString author READ author WRITE setAuthor NOTIFY authorChanged)
public:
    void setAuthor(const QString &a) {
        if (a != m_author) {
            m_author = a;
            emit authorChanged();
        }
    }
    QString author() const {
        return m_author;
    }
    signals:
            void authorChanged();
private:
    QString m_author;
};


#endif //MYQTPROJECT_MESSAGE_H
