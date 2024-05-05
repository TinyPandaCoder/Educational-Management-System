#include "../HeaderFiles/Teacher.h"



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
    cout<<fixed<<"Salary: "<< this->salary<<'\n';
    cout<<"Course: "<< this->course<<"\n\n";
}
teacher::teacher() {
    this->addPerson();
    cout<<"Please Enter Salary: ";
    string inp;
    while (cin>>inp)
    {
        if (Validator::validateRealNumber(inp))
        {
            this->salary= stod(inp);
            break;
        }
    }
}

void teacher::setCourse(string course) {

    this->course=course;
}
