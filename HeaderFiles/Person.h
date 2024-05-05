#ifndef EDUCATIONAL_OOP_PERSON_H
#define EDUCATIONAL_OOP_PERSON_H

#ifndef EDUCATIONAL_OOP_VALIDATOR_H

#include "../HeaderFiles/Validator.h"

#endif



#ifndef EDUCATIONAL_OOP_STRING
#define EDUCATIONAL_OOP_STRING
#include <string>
#endif
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

    void addPerson();
    string getUsername()const;
    int getID () const;
	char getGender() const;
	string getFirstName()const;
	string getLastName()const;
    string getPassword()const;
	string getDayOfBirth()const;
    string getPhoneNumber()const;
    virtual void showData() const;
    void setID(int &ID) ;
	void setGender(char& gender);
	void setFirstName(string& firstName);
	void setLastName(string &lastName);
	void setUsername(string& username);
	void setPassword(string& password);
	void setDayOfBirth(string& DOB);
    void setPhoneNumber(string& phoneNumber);
    void inputFirstName(string& inp);
    void inputLastName(string& inp);
    void inpitDateOfBirth(string& inp);
    void inputPhoneNumber(string& inp);
    void inputGender(string& inp);
};
#endif