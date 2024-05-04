#include "Person.h"
#include <iostream>
int person ::  getID() const
{
	return this->ID;
}
char person::getGender() const
{
	return this->gender;
}
string person::getFirstName()const
{
	return this->firstName;
}
string person:: getLastName()const
{
	return this->lastName;

}
string person::getUsername()const
{
	return this->username;
}
string person::getPassword()const
{
	return this->password;

}
string person::getDayOfBirth()const
{
	return this->DOB;
}
string person::getPhoneNumber()const {
	return this->phoneNumber;
}
void person::showData() const {
    cout<<"Name: "<<this->firstName<<' '<<this->lastName<<'\n';
    cout<<"Date of birth: "<<this->DOB<<'\n';
    cout<<"Phone Number: "<<this->phoneNumber<<'\n';
    cout<<"ID: "<<this->ID<<'\n';
    cout<<"Gender: "<<this->gender<<'\n';
}


void person::setID(int& ID)
{
	this->ID = ID;
}
void person::setGender(char& gender)
{
	this->gender = gender;
}
void person::setFirstName(string& firstName)
{
	this->firstName = firstName;
}
void person::setLastName(string& lastName)
{
	this->lastName = lastName;
}
void person::setUsername(string& username)
{
	this->username = username;
}
void person::setPassword(string& password)
{
	this->password = password;
}
void person::setDayOfBirth(string& DOB)
{
	this->DOB = DOB;
}
void person::setPhoneNumber(string& phoneNumber) {
	 this->phoneNumber=phoneNumber;
}

void person::addPerson() {

}

person::person() {

}