#include "Student.hpp"

Student::Student() {
    cout << "Student object created!" << endl; 
}

Student::~Student() {
    cout << "Student object destroyed!" << endl; 
}

void Student::setName(string s) {
    name = s; 
}

void Student::setAge(int i) {
    age = i;
}

string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age; 
}