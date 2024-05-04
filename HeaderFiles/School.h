#ifndef EDUCATIONAL_OOP_SCHOOL_H
#define EDUCATIONAL_OOP_SCHOOL_H
#include "Teacher.h"
#include "Student.h"
#include "Principal.h"
#include "Subject.h"
#include "Validator.h"
#include <vector>
#include <map>


class school{
private:

    vector<teacher> teachers;
    vector<student> students;
    vector<subject> subjects;
    principal princ;
    int idCounter;
    map<string,bool> usernames;
    string usernameCurrnet,passwordCurrent,currentRole;
    void showStudentPanel(student& Student)
    {
        cout<<"\n\t\tHello Mr."<<Student.getFirstName()<<" How can we help you?\n\n";
        cout<<"1- Show my details\n";
        cout<<"2- Show your classmates\n";

    }
    void showTeacherPanel(teacher& Teacher)
    {
        cout<<"\n\t\tHello Mr."<<Teacher.getFirstName()<<" How can we help you?\n\n";
        cout<<"1- Show my details\n";
        cout<<"2- Show your workmates\n";
        cout<<"3- Show students\n";
        cout<<"4- Hold exam\n";

    }
    void showPrincipalPanel(){
        cout<<"\n\t\tHello Mr. Principal! What are you up to?\n\n";
        cout<<"1- Enroll Student\n";
        cout<<"2- Enroll teacher\n";
        cout<<"3- Show students\n";
        cout<<"4- Show teachers\n";
        cout<<"5- Show subjects\n";
    }

public:

    int getIdCounter();
    void setIdCounter();
    school();
};
#endif
