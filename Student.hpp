#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>
using namespace std; 

class Student {
private: 
    string name; 
    int age;

public: 
    Student(){
        cout << "Student object created!" << endl;
    }

    ~Student() {
        cout << "Student object destroyed!" << endl; 
    }

    void setName(string s) {
        name = s; 
    }


    void setAge(int i) {
        age = i; 
    } 

    string getName() const {
        return name; 
    }


    int getAge() const {
        return age; 
    } 

}; 

#endif
