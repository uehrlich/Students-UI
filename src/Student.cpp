//
// Created by almog on 7/25/23.
//

#include "Student.h"

int fillGrade=0;
Student ::Student(int id, std::string name, int num_of_grade) : id{id} , name{name}{}
void Student :: addGrade(int g){
    grade.push_back(g);
}

//deep copy of the array
std::list<int> Student::GetGrade() {
   std::list<int> temp;
  for (const auto &item: grade) {
        temp.push_back(item);
    }
  return temp;
}

