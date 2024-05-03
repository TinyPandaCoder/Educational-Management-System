#include "Teacher.h"
#include <iostream>
void teacher::holdExam(){

}
double teacher::getSalary() const{
    return this->salary;
}
string teacher::getCourse() const{
    return this->course;
}
void teacher::showData(){
    person::showData();
    cout<<"Salary: "<< this->salary<<'\n';
    cout<<"Course: "<< this->course<<'\n';

}