//
// Created by almog on 7/25/23.
//

#ifndef MYQTPROJECT_STUDENT_H
#define MYQTPROJECT_STUDENT_H
#include <string>
#include <list>

class Student{
private:
    int id;
    std::string name;
    std::list<int> grade;
public:
    Student(int id, std::string name, int num_of_grade);
    void addGrade(int g);
    std::list<int> GetGrade();

};


#endif //MYQTPROJECT_STUDENT_H
