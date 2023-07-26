//
// Created by tzevet5-dev on 7/26/23.
//

#ifndef MYQTPROJECT_STUDENT_HPP
#define MYQTPROJECT_STUDENT_HPP



#include <string>
#include <vector>

using namespace std;

class Student {
private:
    string name;
    vector<int> grades;

public:
    // Constructor
    Student(const string& studentName, vector<int> grades);

    // Getter for name
    string getName() const;

    // Setter for name
    void setName(const string& studentName);

    // Getter for grades
    vector<int> getGrades() const;

    // Setter for grades
    void setGrades(const vector<int>& studentGrades);
};

#endif //MYQTPROJECT_STUDENT_HPP
