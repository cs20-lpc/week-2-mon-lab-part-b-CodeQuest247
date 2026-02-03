#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
using namespace std; 

class Student { // Definition of the Student class 
private: // private data members can only be accessed within the class itself
    string name; // stores the student's name 
    int age; // stores the student's age 

public: // public memebers can be accessed from outside the class 
    Student(){ 
        cout << "Student object created!" << endl; // This is a default constructor that runs automantically when a Student object is created
        // It also prints this message to show when a Student object is constructed 
    }

    ~Student() { //This is a destructor for the Student class 
        // Destructor thats runs automatically when a Student object is destroyed
        cout << "Student object destroyed!" << endl; 
        // Prints a message to show when a Student object is removed from memory
    }

    void setName(string s) {
        // Setter function used to assign a value to the private name variable
        name = s; 
    }


    void setAge(int i) {
        // Setter function used to assign a value to the private age variable 
        age = i; 
    } 

    string getName() const {
        // Getter function that returns the student's name 
        // const makes sure this function does not modify the object 
        return name; 
    }


    int getAge() const {
        // Getter functon that returns the student's age 
        // const makes sure this function does nto modify the object 
        return age; 
    } 

}; 

#endif

