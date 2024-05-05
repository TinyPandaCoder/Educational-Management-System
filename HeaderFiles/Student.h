#ifndef EDUCATIONAL_OOP_STUDENT_H
#define EDUCATIONAL_OOP_STUDENT_H

#ifndef EDUCATIONAL_OOP_Person_H
#include "../HeaderFiles/Person.h"
#endif

class  student : public person{
private:
    double percentatgeScore;
public:
	double getPercentatgeScore() const;
    void setPercentatgeScore(double PercentatgeScore);
    void showData()const;
    student();

};
#endif