
#include "Student.h"

int fillGrade=0;
Student ::Student(int id, QString name, int num_of_grade) : id{id} , m_name{name}{}
/*

void Student::append_grades(QQmlListProperty<int> *list, int grade)
{
    Student *student= qobject_cast<Student *>(list->object);
    if (grade)
        student->m_grades.append(& student->m_grades,&grade);
}
/*
void Student::addGrade(int grade) {
    m_grades.append(grade);
    emit gradesChanged();
}*/
/*
QQmlListProperty<int> Student::grades() const {
    return m_grades;
}*/
/*
//deep copy of the array
std::list<int> Student::GetGrade() {
   std::list<int> temp;
  for (const auto &item: m_grade) {
        temp.push_back(item);
    }
  return temp;
}*/

