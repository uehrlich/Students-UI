//
// Created by almog on 7/25/23.
//
#pragma once
#ifndef MYQTPROJECT_STUDENT_H
#define MYQTPROJECT_STUDENT_H
#include <string>
#include <list>
#include <QObject>
#include <QString>
#include <qqml.h>
#include <QtGui>
#include <iostream>
class Student : public QAbstractListModel
{
    Q_OBJECT

    Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)


public:
    Student(int id,QString name, int num_of_grade);
    Student(QObject *parent = nullptr): QAbstractListModel(parent) {m_name = "almog" ;
        auto a = 2;
        m_grades.append(98);
        m_grades.append(45);
    }

    void setName(const QString &na){
        if( na != m_name) {
            m_name =na;
            emit nameChanged();
        }
    }
    QString name() const {
        return m_name;
    }
    virtual QHash<int, QByteArray> roleNames() const override
    {
        QHash<int, QByteArray> names;
        names[Grade] = "grade";
        return names;
    }
    enum Roles
    {
        Grade = Qt::UserRole,
    };

    QVariant data(const QModelIndex &index, int role =0 ) const override
    {
        if (!index.isValid())
            return QVariant();
        return m_grades.at(index.row());
    }
    bool setData(const QModelIndex &index, const QVariant &value, int role) override
    {
        const int newGrade = value.toInt();
        m_grades[index.row()] = newGrade;
        emit dataChanged(index, index);
        return true;
    }
    Q_INVOKABLE int rowCount(const QModelIndex &/*parent*/ = QModelIndex()) const override
    {
        return m_grades.size();
    }
    Q_INVOKABLE void append(char* g) {
        m_grades.append(atoi(g));
    }

    Q_INVOKABLE void removeLast() {
        m_grades.removeLast();
    }

    Q_INVOKABLE void clear() {
        m_grades.clear();
    }


signals:
    void nameChanged();
    //void gradesChanged();
private:
    int id;
    QString m_name;
    QVector<int> m_grades;
    //static void append_grades(QQmlListProperty<int> *list, int grade);
   // QQmlListProperty<int> m_grades;

};


#endif //MYQTPROJECT_STUDENT_H
