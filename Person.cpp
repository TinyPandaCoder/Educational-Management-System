#include "Person.h"
#ifndef EDUCATIONAL_OOP_iostream
#define EDUCATIONAL_OOP_iostream
#include <iostream>
#endif

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


void person::addPerson(){
    string inp;
    //First Name
    cout<<"Please enter first name:\n";
    while (cin>>inp)
    {
        if(Validator::validateName(inp))
        {
            this->firstName=inp;
            break;
        }
    }

    //Last Name
    cout<<"Please enter last name:\n";
    while (cin>>inp)
    {
        if(Validator::validateName(inp))
        {
            this->lastName=inp;
            break;
        }
    }

    //Date of birth
    cout<<"Please enter Date of birth:\n";
    while (cin>>inp)
    {
        if (Validator::validateDate(inp))
        {
            this->DOB=inp;
            break;
        }
    }


    //phone number
    cout<<"Please enter phone number:\n";
    while (cin>>inp)
    {
        if (Validator::validatePhoneNumber(inp))
        {
            this->phoneNumber=inp;
            break;
        }
    }

    //gender
    cout<<"Please enter your gender:\n";
    while (cin>>inp)
    {
        if (Validator::validateGender(inp))
        {
            this->gender=inp[0];
            break;
        }
    }
}