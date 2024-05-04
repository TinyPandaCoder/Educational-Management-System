#ifndef EDUCATIONAL_OOP_Teacher_H
#define EDUCATIONAL_OOP_Teacher_H

#ifndef EDUCATIONAL_OOP_Person_H
#include "Person.h"
#endif

class teacher : public person {
private:
	double salary;
	string course;
public:
	void holdExam();
	double getSalary() const;
	string getCourse() const;
    void showData();
};
#endif