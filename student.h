#ifndef STUDENT_H
#define STUDENT_H
#include "Person.h"

using namespace std;

class Student : public Person{
private:
    string studentId;
    string career;

public:
    Student(string name = "", int age = 0, string studentId = "", string career = ""); // Declares a Student
    void setstudentId(string studentId); // Setter for student ID
    string getstudentId(); // Getter for student ID
    void setcareer(string career); // Setter for career
    string getcareer(); // Getter for career
    void showData(int id) override;
};

#endif