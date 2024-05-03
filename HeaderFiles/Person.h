#pragma once
#include <string>
using namespace std;
class person {
private:
	string firstName,lastName;
	string username;
	string password;
	string DOB;
    string phoneNumber;
    int ID;
	char gender;

public:

    string getUsername()const;
    int getID () const;
	char getGender() const;
	string getFirstName()const;
	string getLastName()const;
    string getPassword()const;
	string getDayOfBirth()const;
    string getPhoneNumber()const;
    virtual void addPerson() ;

    virtual void showData() const;

    void setID(int ID) ;
	void setGender(char gender);
	void setFirstName(string firstName);
	void setLastName(string lastName);
	void setUsername(string userName);
	void setPassword(string password);
	void setDayOfBirth(string DOB);
    void setPhoneNumber(string phoneNumber);
};