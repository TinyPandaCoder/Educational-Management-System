//
// Created by Mahmoud Alaa on 5/3/2024.
//
#include "School.h"
#include <cstdlib>
#include <cmath>

string inp;

//Principal Panel
#define Enroll_Student 1
#define Enroll_Teacher 2
#define Show_Principal_Students 3
#define Show_Teachers 4
#define Show_Subjects 5
#define Log_Out_Principal 6

//Student Panel
#define Show_Student_Details 1
#define Show_Classmates 2
#define Log_Out_Student 3

//Teacher Panel
#define Show_Teacher_Details 1
#define Show_Workmates 2
#define Show_Teacher_Students 3
#define Hold_Exam 4
#define Log_Out_Teacher 5

void school::showStudentPanel(student& Student)
{
    cout<<"\nHello Mr."<<Student.getFirstName()<<" How can we help you?\n\n";
    cout<<"1- Show my details\n";
    cout<<"2- Show your classmates\n";
    cout<<"3- Log out\n";
    string op;

    //Validate input
    while (cin>>op)
    {
        if (Validator::validateStudentPanel(op))
            break;
    }

    switch (op[0]-'0') {
        case Show_Student_Details:
        {
            Student.showData();
            showStudentPanel(Student);
            break;
        }
        case Show_Classmates:
        {
            showStudents();
            showStudentPanel(Student);
            break;
        }
        case Log_Out_Student:
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

    //Validate input
    while (cin>>op)
    {
        if (Validator::validateTeacherPanel(op))
            break;
    }

    switch (op[0]-'0')
    {
        case Show_Teacher_Details:
        {
            Teacher.showData();
            showTeacherPanel( Teacher);
            break;
        }
        case Show_Workmates:
        {
            showTeachers();
            showTeacherPanel( Teacher);
            break;
        }
        case Show_Teacher_Students:
        {
            showStudents();
            showTeacherPanel( Teacher);
            break;
        }
        case Hold_Exam:
        {
            for (auto &it : students)
            {
                double totalScore=getNumberOfExams()*100+100;
                double currentScore=it.getPercentatgeScore()*(getNumberOfExams()*100.0)+fmod(rand(),100.0);
                it.setPercentatgeScore(totalScore/currentScore);
            }
            showTeacherPanel( Teacher);
            break;
        }
        case Log_Out_Teacher:
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
        case Enroll_Student:
        {
            enrollStudent();
            showPrincipalPanel();
            break;
        }
        case Enroll_Teacher:
        {
            enrollTeacher();
            showPrincipalPanel();

            break;
        }
        case Show_Principal_Students:
        {
            showStudents();
            showPrincipalPanel();
            break;
        }
        case Show_Teachers:
        {
            showTeachers();
            showPrincipalPanel();
            break;
        }
        case Show_Subjects:
        {
            showSubjects();
            showPrincipalPanel();
            break;
        }
        case Log_Out_Principal:
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

        loginRole();
        loginUsername();
        loginPassword();

        if (usernames.count(this->usernameCurrnet)&&usernames[this->usernameCurrnet]==this->passwordCurrent) {
            found=true;
            if (currentRole == "1")
                showPrincipalPanel();
            else if (currentRole == "2")
            {
                for (auto &it: students)
                    if (it.getUsername() == usernameCurrnet) {
                        showStudentPanel(it);
                        found=true;
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
                        found=true;
                        break;
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

void school::setStudent(student& nS) {
    string user,pass;
    cout<<"Please Enter username\n";
    while (cin>>user)
    {
        if (Validator::validateUsername(user))
        {
            if (usernames.count(user))
            {
                cout<<"Sorry this username already exist. Please try again.\n";
            }
            else
            {
                nS.setUsername(user);
                break;
            }
        }
    }
    cout<<"Please Enter password\n";
    while (cin>>pass)
    {
        if (Validator::validatePassword(pass))
        {
            nS.setPassword(pass);
            break;
        }
    }
    usernames[user]=pass;
}

void school::setTeacher(teacher& nT) {
    string user,pass;
    cout<<"Please Enter username\n";
    while (cin>>user)
    {
        if (Validator::validateUsername(user))
        {
            if (usernames.count(user))
            {
                cout<<"Sorry this username already exist. Please try again.\n";
            }
            else
            {
                nT.setUsername(user);
                break;
            }
        }
    }
    cout<<"Please Enter password\n";
    while (cin>>pass)
    {
        if (Validator::validatePassword(pass))
        {
            nT.setPassword(pass);
            break;
        }
    }
    usernames[user]=pass;
}

int school::getIdCounter() const{
    return this->idCounter;
}

void school::setIdCounter() {
    this->idCounter++;
}

void school::enrollTeacher() {
    teacher nT;
    nT.setID(++idCounter);
    subject sub;
    nT.setCourse(sub.getName());
    sub.setID(++idCounter);
    subjects.push_back(sub);
    setTeacher(nT);
    teachers.push_back(nT);
    school::showPrincipalPanel();
}

void school::enrollStudent() {
    student nS;
    nS.setID(++idCounter);
    setStudent(nS);
    students.push_back(nS);
    school::showPrincipalPanel();
}

void school::showStudents() {
    for (auto& it : students)
    {
        it.showData();
    }
}

void school::showTeachers() {
    for (auto& it : teachers)
    {
        it.showData();
    }
    school::showPrincipalPanel();
}

void school::showSubjects() {
    for (auto& it : subjects)
    {
        it.showdData();
    }
    school::showPrincipalPanel();
}

void school::loginRole() {
    //Log in Role
    while (cin>>inp)
    {
        if (Validator::validateLogInPanel(inp))
        {
            this->currentRole=inp;
            break;
        }
    }
}

void school::loginUsername() {

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
}

void school::loginPassword() {

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

}
