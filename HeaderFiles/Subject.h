#ifndef EDUCATIONAL_OOP_SUBJECT_H
#define EDUCATIONAL_OOP_SUBJECT_H

#ifndef EDUCATIONAL_OOP_VALIDATOR_H
#include "../HeaderFiles/Validator.h"
#endif

using namespace std;
class subject {
private:
	string name;
	int ID;
public:

    subject();
	string getName() const;
	int getID() const;
    void setName(string& name);
	void setID(int &ID);
    void showdData() const;
};
#endif