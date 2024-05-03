#include "Person.h"
class  student :  public person{
private:
    double GPA;
public:
	double getGPA() const;
    void addStudent();
    void setGPA(double GPA);
    void showData()const;

};