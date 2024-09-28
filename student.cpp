#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(string name, int age, string studentId, string career) : Person(name, age) {
    this->studentId = studentId;
    this->career = career;
}

void Student::setstudentId(string studentId) {
    this->studentId = studentId;
}

string Student::getstudentId(){
    return studentId;
}

void Student::setcareer(const string career) {
    this->career = career;
}

string Student::getcareer(){
    return career;
}

void Student::showData(int id){
    Person::showData(id);
    cout << "Student ID: " << studentId << ", Career: " << career << endl;
}