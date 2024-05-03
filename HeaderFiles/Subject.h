#pragma once

#include <string>

using namespace std;
class subject {
private:
	string name;
//	static int num;
	int ID;
public:

	string getName() const;
	int getNumberOfCourses() const;
	int getID() const;
//    int getNum() const;

    void setName(string name);
	void getID(int ID);
};
