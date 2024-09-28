#include "Person.h"
#include <iostream>

using namespace std;

Person::Person(string name, int age){
    this->name = name;
    this->age = age;
}

void Person::setname(string name){
    this->name = name;
}

string Person::getname(){
    return name;
}

void Person::setage(int age){
    this->age = age;
}

int Person::getage(){
    return age;
}

void Person::showData(int id){
    cout << "ID: " << id << ", Name: " << name << ", Age: " << age << endl;
}