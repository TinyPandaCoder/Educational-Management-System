#ifndef EDUCATIONAL_OOP_Person_H
#define EDUCATIONAL_OOP_Person_H

#ifndef EDUCATIONAL_OOP_String
#define EDUCATIONAL_OOP_String
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

    person();
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
    void setID(int &ID) ;
	void setGender(char& gender);
	void setFirstName(string& firstName);
	void setLastName(string &lastName);
	void setUsername(string& username);
	void setPassword(string& password);
	void setDayOfBirth(string& DOB);
    void setPhoneNumber(string& phoneNumber);
};
#endif