#include "Person.h"


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
    inputFirstName(inp);
    inputLastName(inp);
    inpitDateOfBirth(inp);
    inputPhoneNumber(inp);
    inputGender(inp);

}

void person::inputFirstName(string& inp) {
    cout<<"Please enter first name:\n";
    while (cin>>inp) {
        if (Validator::validateName(inp)) {
            this->firstName = inp;
            break;
        }
    }
}

void person::inputLastName(string& inp) {

    cout<<"Please enter last name:\n";
    while (cin>>inp)
    {
        if(Validator::validateName(inp))
        {
            this->lastName=inp;
            break;
        }
    }

}

void person::inpitDateOfBirth(string& inp) {

    cout<<"Please enter Date of birth:\n";
    while (cin>>inp)
    {
        if (Validator::validateDate(inp))
        {
            this->DOB=inp;
            break;
        }
    }

}

void person::inputPhoneNumber(string& inp) {

    cout<<"Please enter phone number:\n";
    while (cin>>inp)
    {
        if (Validator::validatePhoneNumber(inp))
        {
            this->phoneNumber=inp;
            break;
        }
    }
}

void person::inputGender(string& inp) {

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
