/* TO RUN THE CODE, OPEN A TERMINAL AND WRITE THE FOLLOWING LINES, DEPENDING ON YOUR OS
WINDOWS
./main

APPLE COMPUTERS (macOS) MUST CREATE A NEW .exe, REMOVE THE main.exe ON THE ZIP FILE
ONCE DONE OPEN A TERMINAL AND COPY
g++ -o main.exe person.cpp professor.cpp student.cpp main.cpp
./main

Regards to the reader :) - Luis
*/

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"

int main(){
    Person* people[4]; // An array of 4 people is declared

    people[0] = new Student("Luis Ortiz de Montellano", 19, "A01286114", "IRS"); // Student Luis Ortiz
    people[1] = new Professor("Juan Francisco", 30, "L012345678", "Information Technologies"); // Professor Juan Francisco
    people[2] = new Student("Josue Tijerina", 18, "A01281234", "ITC"); // Student Josue Tijerina
    people[3] = new Professor("Mateo Arango", 40, "L012345679", "Physics"); // Professor Mateo Arango

    for (int i=0; i<4; i++){
        people[i]->showData(i+1);  // Uses showData to display the array of 4 people with their individual characteristics
    }

    for (int i=0; i<4; i++){ // Uses delete to free the reserved memory
        delete people[i];
    }
    return 0;
}