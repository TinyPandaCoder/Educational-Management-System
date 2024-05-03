#include "Subject.h"
#include<string>

string subject:: getName() const {
	return this->name; 
}
//int subject::getNumberOfCourses() const {
//	return this->num;
//}
int subject::getID() const {
	return this->ID; 
}
void subject::setName(string name) {
	this->name = name; 
}
void subject::getID(int ID) { 
	this->ID = ID; 
}
