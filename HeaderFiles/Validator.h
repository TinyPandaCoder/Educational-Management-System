#ifndef EDUCATIONAL_OOP_VALIDATOR_H
#define EDUCATIONAL_OOP_VALIDATOR_H

#ifndef EDUCATIONAL_OOP_iostream
#define EDUCATIONAL_OOP_iostream
#include <iostream>
#endif

#include <regex>
using namespace std;
class Validator{
private:
     static regex reg[10];
     static string error[10];
public:
    static bool validateStudentPanel(string& inp);
    static bool validateLogInPanel(string& inp);
    static bool validateTeacherPanel(string& inp);
    static bool validatePrincipalPanel(string& inp);
    static bool validatePassword(string& inp);
    static bool validateUsername(string& inp);
    static bool validateName(string& inp);
    static bool validateDate(string& inp);
    static bool validatePhoneNumber(string& inp);
    static bool validateGender(string& inp);
    static bool validateRealNumber(string& inp);

    //Valid implementation
    static bool validatation(int idx,string& inp);

};
#endif
