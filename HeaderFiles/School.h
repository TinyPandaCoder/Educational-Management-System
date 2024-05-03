#ifndef EDUCATIONAL_OOP_SCHOOL_H
#define EDUCATIONAL_OOP_SCHOOL_H
#endif
#include "Teacher.h"
#include "Student.h"
#include "Principal.h"
#include "Subject.h"
#include "Input.h"
#include <vector>
#include <map>


class school{
private:

    vector<teacher> teachers;
    static vector<student> students;
    vector<subject> subjects;
    principal princ;
    input in;
    static int idCounter;
    static map<string,bool> usernames;
    void showStudentPanel(student& Student)
    {
        cout<<"\n\t\tHello Mr."<<Student.getFirstName()<<" How can we help you?\n\n";
        cout<<"1- Show my details\n";
        cout<<"2- Show your classmates\n";
        int op=in.validatation(0)[0]-'0';
        switch(op)
        {
            case 1:
            {
                Student.showData();
                break;
            }
            case 2:
            {
                for (auto &it : students)
                    it.showData();
                break;
            }

        }
    }
    void showTeacherPanel(teacher& Teacher)
    {
        cout<<"\n\t\tHello Mr."<<Teacher.getFirstName()<<" How can we help you?\n\n";
        cout<<"1- Show my details\n";
        cout<<"2- Show your workmates\n";
        cout<<"3- Show students\n";
        cout<<"4- Hold exam\n";
        int op=in.validatation(0)[0]-'0';
        switch(op)
        {
            case 1:
                Teacher.showData();
                break;
            case 2:
                for (auto &it : students)
                        it.showData();
                break;
            case 3:
                for (auto &it : teachers)
                    it.showData();
                break;
            case 4:
            {
                Teacher.holdExam();
                break;
            }
        }

    }
    void showPrincipalPanel()
    {
        cout<<"\n\t\tHello Mr. Principal! What are you up to?\n\n";
        cout<<"1- Enroll Student\n";
        cout<<"2- Enroll teacher\n";
        cout<<"3- Show students\n";
        cout<<"4- Show teachers\n";
        cout<<"5- Show subjects\n";
        int op=in.validatation(0)[0]-'0';
        switch(op)
        {
            case 1:
                princ.addStudent();
                break;
            case 2:
                princ.addTeacher();
            case 3:
            {
                for (auto &it : students)
                    it.showData();
                break;
            }
            case 4:
            {
                for (auto &it : teachers)
                    it.showData();
                break;
            }
            case 5:
            {
                for (auto &it : subjects)
                    cout<<it.getName()<<'\n';
            }
        }
    }

public:
    friend class principal;
    friend class person;
    friend class input;
    int static getIdCounter()
    {
        return idCounter;
    };
    void static setIdCounter()
    {
        idCounter++;
    };
    school()
    {
        bool found=false;
        do {
            in.getinput();
            if (in.getRole()=="1")
            {
                if (in.getUsername()==princ.getUsername()&&in.getPassword()==princ.getPassword())
                {
                    showPrincipalPanel();
                    found=true;
                }
            }
            else if (in.getRole()=="2")
            {
                for (auto &it : students)
                    if (in.getUsername()==it.getUsername()&&in.getPassword()==it.getPassword())
                    {
                        showStudentPanel(it);
                        found=true;
                    }
            }
            else
            {
                for (auto &it : teachers)
                    if (in.getUsername()==it.getUsername()&&in.getPassword()==it.getPassword())
                    {
                        showTeacherPanel(it);
                        found=true;
                    }

            }
            if (!found)
            {
                cout<<"\n\t\tWrong Username or Password! Please try again.\n"<<'\n';
            }
        }
        while (!found);

    }
};