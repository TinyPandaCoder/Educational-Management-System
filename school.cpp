//
// Created by Mahmoud Alaa on 5/3/2024.
//
#include "School.h"
#include <cstdlib>


int school::getIdCounter() const{
    return this->idCounter;
}

void school::setIdCounter() {
    this->idCounter++;
}
void school::showStudentPanel(student& Student)
{
    cout<<"\nHello Mr."<<Student.getFirstName()<<" How can we help you?\n\n";
    cout<<"1- Show my details\n";
    cout<<"2- Show your classmates\n";
    cout<<"3- Log out\n";
    string op;
    while (cin>>op)
    {
        if (Validator::validateStudentPanel(op))
            break;
    }
    switch (op[0]-'0') {
        case 1:
        {
            Student.showData();
            school::showStudentPanel(Student);
            break;
        }
        case 2:
        {
            for (auto& it : students)
            {
                it.showData();
                cout<<'\n';
            }
            school::showStudentPanel(Student);
            break;
        }
        case 3:
        {
            school::welcomeScreen();
            break;
        }
    }

}
void school::showTeacherPanel(teacher& Teacher)
{
    cout<<"\nHello Mr."<<Teacher.getFirstName()<<" How can we help you?\n\n";
    cout<<"1- Show my details\n";
    cout<<"2- Show your workmates\n";
    cout<<"3- Show students\n";
    cout<<"4- Hold exam\n";
    cout<<"5- Log out\n";
    string op;
    while (cin>>op)
    {
        if (Validator::validateTeacherPanel(op))
            break;
    }
    switch (op[0]-'0') {
        case 1:
        {
            Teacher.showData();
            school::showTeacherPanel( Teacher);
            break;
        }
        case 2:
        {
            for (auto& it : teachers)
            {
                it.showData();
                cout<<'\n';
            }
            school::showTeacherPanel( Teacher);
            break;
        }
        case 3:
        {
            for (auto& it : students)
            {
                it.showData();
                cout<<'\n';
            }
            school::showTeacherPanel( Teacher);
            break;
        }
        case 4:
        {
            for (auto &it : students)
            {
                int totalScore=getNumberOfExams()*100+100;
                int currentScore=it.getPercentatgeScore()*(getNumberOfExams()*100)+rand()%100;
                it.setPercentatgeScore(totalScore/currentScore);
            }
            school::showTeacherPanel( Teacher);
            break;
        }
        case 5:
        {
            school::welcomeScreen();
            break;
        }

    }

}
void school::showPrincipalPanel(){
    cout<<"\nHello Mr. Principal! What are you up to?\n\n";
    cout<<"1- Enroll Student\n";
    cout<<"2- Enroll teacher\n";
    cout<<"3- Show students\n";
    cout<<"4- Show teachers\n";
    cout<<"5- Show subjects\n";
    cout<<"6- Log out\n";
    string op;
    while (cin>>op)
    {
        if (Validator::validatePrincipalPanel(op))
            break;
    }
    switch (op[0]-'0') {
        case 1:
        {
            student nS;
            nS.setID(++idCounter);
            cout<<"Please Enter username\n";
            while (cin>>op)
            {
                if (Validator::validateUsername(op))
                {
                    if (usernames.count(op))
                    {
                        cout<<"Sorry this username already exist. Please try again.\n";
                    }
                    else
                    {
                        nS.setUsername(op);
                        break;
                    }
                }
            }
            cout<<"Please Enter password\n";
            while (cin>>op)
            {
                if (Validator::validatePassword(op))
                {
                    nS.setPassword(op);
                    break;
                }
            }
            students.push_back(nS);
            school::showPrincipalPanel();
            break;
        }
        case 2:
        {
            teacher nT;
            nT.setID(++idCounter);
            subject sub;
            sub.setID(++idCounter);
            subjects.push_back(sub);
            cout<<"Please Enter username\n";
            while (cin>>op)
            {
                if (Validator::validateUsername(op))
                {
                    if (usernames.count(op))
                    {
                        cout<<"Sorry this username already exist. Please try again.\n";
                    }
                    else
                    {
                        nT.setUsername(op);
                        break;
                    }
                }
            }
            cout<<"Please Enter password\n";
            while (cin>>op)
            {
                if (Validator::validatePassword(op))
                {
                    nT.setPassword(op);
                    break;
                }
            }
            teachers.push_back(nT);
            school::showPrincipalPanel();
            break;
        }
        case 3:
        {
            for (auto& it : students)
            {
                it.showData();
            }
            school::showPrincipalPanel();
            break;
        }
        case 4:
        {
            for (auto& it : teachers)
            {
                it.showData();
            }
            school::showPrincipalPanel();
            break;
        }
        case 5:
        {
            for (auto& it : subjects)
            {
                it.showdData();
            }
            school::showPrincipalPanel();
            break;
        }
        case 6:
        {
            school::welcomeScreen();
            break;
        }
    }
}
void  school::welcomeScreen()
{
    bool found=false;
    do
    {
        usernames["root"]="password";
        cout<<"Welcome to school Water Law !\n\n";
        cout<<"Who would like to log in?\n";
        cout<<"1- Principal\n";
        cout<<"2- Student\n";
        cout<<"3- Teacher\n";
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
        cout<<"Please enter your username:\n";
        while (cin>>inp)
        {
            if (Validator::validateUsername(inp))
            {
                this->usernameCurrnet=inp;
                break;
            }
        }

        //Log in Password
        cout<<"Please enter your password:\n";
        while (cin>>inp)
        {
            if (Validator::validatePassword(inp))
            {
                this->passwordCurrent = inp;
                break;
            }
        }

        if (usernames.count(this->usernameCurrnet)&&usernames[this->usernameCurrnet]==this->passwordCurrent) {
            found=true;
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
        if (!found)
        {
            cout<<"Wrong username or password. Please try again.\n\n";
        }
    }
    while (!found);
}


school::school() {
    welcomeScreen();
}

int school::getNumberOfExams() const {
    return numberOfExams;
}

void school::setNumberOfExams()  {
    numberOfExams++;
}

bool school::findUsername(string &userName) const {
    return usernames.count(userName);
}

void school::setUsername(string &userName, string password) {
    usernames[userName]=password;
}