#pragma once
#include "Person.h"
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