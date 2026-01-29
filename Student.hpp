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
    Student();
    ~Student();

    void setName(string);
    void setAge(int); 

    string getName() const; 
    int getAge() const; 

}; 

#endif
