#ifndef EDUCATIONAL_OOP_Student_H
#define EDUCATIONAL_OOP_Student_H

#ifndef EDUCATIONAL_OOP_Person_H
#include "Person.h"
#endif

class  student : public person{
private:
    double GPA;
public:
	double getGPA() const;
    void addStudent();
    void setGPA(double GPA);
    void showData()const;

};
#endif