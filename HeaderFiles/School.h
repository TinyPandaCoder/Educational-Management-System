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
    int idCounter,numberOfExams;
    map<string,string> usernames;
    string usernameCurrnet,passwordCurrent,currentRole;
    void showStudentPanel(student& Student);
    void showTeacherPanel(teacher& Teacher);
    void showPrincipalPanel();
    void welcomeScreen();

public:
    int getIdCounter()const ;
    int getNumberOfExams()const;
    bool findUsername(string& userName) const;
    void setUsername(string& userName,string password);
    void setIdCounter();
    void setNumberOfExams();
    school();
};
#endif
