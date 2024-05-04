#include "Student.h"


double student::getPercentatgeScore()const {
	return this->percentatgeScore;
}
void student::setPercentatgeScore(double percentatgeScore) {
	this->percentatgeScore = percentatgeScore;
}
void student::showData() const {
    person::showData();
    cout<<fixed<<"Percentatge Score: "<<this->percentatgeScore<<"%\n\n";
}

student::student() {
    this->addPerson();
}


