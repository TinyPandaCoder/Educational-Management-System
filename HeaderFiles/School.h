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
    void enrollStudent();
    void enrollTeacher();
    void showStudents();
    void showTeachers();
    void showSubjects();
    void loginRole();
    void loginUsername();
    void loginPassword();

public:
    int getIdCounter()const ;
    int getNumberOfExams()const;
    bool findUsername(string& userName) const;
    void setUsername(string& userName,string password);
    void setIdCounter();
    void setNumberOfExams();
    void setStudent(student& nS);
    void setTeacher(teacher& nT);


    school();
};
#endif
