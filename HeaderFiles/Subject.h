#ifndef EDUCATIONAL_OOP_Subject_H
#define EDUCATIONAL_OOP_Subject_H

#ifndef EDUCATIONAL_OOP_String
#define EDUCATIONAL_OOP_String
#include <string>
#endif

using namespace std;
class subject {
private:
	string name;
	int ID;
public:

	string getName() const;
	int getID() const;

    void setName(string& name);
	void getID(int &ID);
};
#endif