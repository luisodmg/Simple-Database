#include "Professor.h"
#include <iostream>

using namespace std;

Professor::Professor(string name, int age, string payrollNumber, string department) : Person(name, age) {
    this->payrollNumber = payrollNumber;
    this->department = department;
}

void Professor::setpayrollNumber(string payrollNumber) {
    this->payrollNumber = payrollNumber;
}

string Professor::getpayrollNumber(){
    return payrollNumber;
}

void Professor::setdepartment(string department) {
    this->department = department;
}

string Professor::getdepartment(){
    return department;
}

void Professor::showData(int id){
    Person::showData(id);
    cout << "Payroll number: " << payrollNumber << ", Department: " << department << endl;
}