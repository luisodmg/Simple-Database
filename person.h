#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person {
private:
    string name; // Name of the person
    int age; // Age of the person

public:
    Person(string name = "", int age = 0); // Declares the Person with the parameters
    void setname(string name); // Setter for the name
    string getname(); // Getter for the name
    void setage(int age); //Setter for the age
    int getage(); // Getter for the age
    virtual void showData(int id); // Declares the virtual function showData()
};

#endif