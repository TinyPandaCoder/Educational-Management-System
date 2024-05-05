#ifndef EDUCATIONAL_OOP_TEACHER_H
#define EDUCATIONAL_OOP_TEACHER_H

#ifndef EDUCATIONAL_OOP_Person_H
#include "../HeaderFiles/Person.h"
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
    void setCourse(string course);
    teacher();
};
#endif