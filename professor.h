#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Person.h"

using namespace std;

class Professor : public Person{
private:
    string payrollNumber; // string for the payroll number
    string department; // string for the department

public:
    Professor(string name = "", int age = 0, string payrollNumber = "", string department = ""); // Creates a new Professor using parameters
    void setpayrollNumber(string payrollNumber); // Setter for payroll number
    string getpayrollNumber(); // Getter for payroll numbers
    void setdepartment(string department); // Setter for department
    string getdepartment(); // Getter for department
    void showData(int id) override; // Overrides the showData() function to work in a specific way
};

#endif