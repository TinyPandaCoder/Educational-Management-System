#include "Student.h"
#include <iostream>
double student::getGPA()const {
	return this->GPA;
}
void student::setGPA(double GPA) {
	this->GPA = GPA;
}
void student::showData() const {
    person::showData();
    cout<<"GPA: "<<this->GPA<<'\n';
}

void student::addStudent() {
    this->person::addPerson();
}
