//
// Created by tzevet5-dev on 7/26/23.
//

#include "student.hpp"

// Constructor
Student::Student(const string& studentName, vector<int> grades) : name(studentName), grades(grades) {}

// Getter for name
string Student::getName() const {
    return name;
}

// Setter for name
void Student::setName(const string& studentName) {
    name = studentName;
}

// Getter for grades
vector<int> Student::getGrades() const {
    return grades;
}

// Setter for grades
void Student::setGrades(const vector<int>& studentGrades) {
    grades = studentGrades;
}