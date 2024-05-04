//
// Created by Mahmoud Alaa on 5/3/2024.
//


#include "School.h"


int school::getIdCounter() {
    return this->idCounter;
}

void school::setIdCounter() {
    this->idCounter++;
}
void school::showStudentPanel(student& Student)
{
    cout<<"\n\t\tHello Mr."<<Student.getFirstName()<<" How can we help you?\n\n";
    cout<<"1- Show my details\n";
    cout<<"2- Show your classmates\n";
    string op;
}
void school::showTeacherPanel(teacher& Teacher)
{
    cout<<"\n\t\tHello Mr."<<Teacher.getFirstName()<<" How can we help you?\n\n";
    cout<<"1- Show my details\n";
    cout<<"2- Show your workmates\n";
    cout<<"3- Show students\n";
    cout<<"4- Hold exam\n";

}
void school::showPrincipalPanel(){
    cout<<"\n\t\tHello Mr. Principal! What are you up to?\n\n";
    cout<<"1- Enroll Student\n";
    cout<<"2- Enroll teacher\n";
    cout<<"3- Show students\n";
    cout<<"4- Show teachers\n";
    cout<<"5- Show subjects\n";
}

school::school() {
    usernames["root"]="password";
    cout<<"\t\tWelcome to school Water Law !\t\t\n\n";
    cout<<"\t\tWho would like to log in?\t\t\n";
    cout<<"\t\t1- Principal\n";
    cout<<"\t\t2- Student\n";
    cout<<"\t\t3- Teacher\n";
    string inp;

    //Log in Role
    while (cin>>inp)
    {
        if (Validator::validateLogInPanel(inp))
        {
            this->currentRole=inp;
            break;
        }
    }

    //Log in Username
    cout<<"\t\tPlease enter your username:";
    while (cin>>inp)
    {
        if (Validator::validateUsername(inp))
        {
            this->usernameCurrnet=inp;
            break;
        }
    }

    //Log in Password
    cout<<"\t\tPlease enter your password:";
    while (cin>>inp)
    {
        if (Validator::validatePassword(inp))
        {
            this->passwordCurrent = inp;
            break;
        }
    }

    if (usernames.count(this->usernameCurrnet)&&usernames[this->usernameCurrnet]==this->passwordCurrent) {
        if (currentRole == "1")
            showPrincipalPanel();
        else if (currentRole == "2")
        {
            for (auto &it: students)
                if (it.getUsername() == usernameCurrnet) {
                    showStudentPanel(it);
                    break;
                }
        }
        else
        {
            for (auto &it: teachers)
            {
                if (it.getUsername() == usernameCurrnet)
                {
                    showTeacherPanel(it);
                }
            }
        }
    }
}
