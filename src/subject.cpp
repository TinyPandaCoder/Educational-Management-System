#include "../HeaderFiles/Subject.h"
#ifndef EDUCATIONAL_OOP_iostream
#define EDUCATIONAL_OOP_iostream
#include <iostream>
#endif


string subject:: getName() const {
	return this->name; 
}

int subject::getID() const {
	return this->ID; 
}
void subject::setName(string& name) {
	this->name = name; 
}
void subject::setID(int& ID) {
	this->ID = ID; 
}

void subject::showdData() const {
    cout<<"Subject ID  : "<<ID<<'\n';
    cout<<"Subject Name: "<<name<<"\n\n";
}

subject::subject() {
    cout<<"Please Enter subject Name: ";
    string inp;
    while (cin>>inp)
    {
        if (Validator::validateName(inp))
        {
            this->name= inp;
            break;
        }
    }
}
