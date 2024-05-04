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
    map<string,string> usernames;
    string usernameCurrnet,passwordCurrent,currentRole;
    void showStudentPanel(student& Student);
    void showTeacherPanel(teacher& Teacher);
    void showPrincipalPanel();


public:

    int getIdCounter();
    void setIdCounter();
    school();
};
#endif
