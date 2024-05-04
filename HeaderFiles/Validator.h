#ifndef EDUCATIONAL_OOP_Validator_H
#define EDUCATIONAL_OOP_Validator_H
#include <iostream>
#include <regex>
#include <vector>
using namespace std;
class Validator{
private:

    static regex reg[9];
    static string error[9];

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

    //Valid implementation
    static bool validatation(int idx,string& inp);

};
regex Validator::reg[9]={regex("[1-2]"),
            regex("[1-3]"),
            regex("[1-4]"),
            regex("[1-5]"),
            regex("[a-zA-Z0-9]*"),
            regex("[a-zA-Z]*"),
            regex("^\\d{4}\\-(0?[1-9]|1[012])\\-(0?[1-9]|[12][0-9]|3[01])$"),
            regex("^01{1}(0|1|2|5)\\d{8}$"),regex("^(M|F)$")
};
string Validator::error[9]={"Please Enter single number between 1 - 2",
                        "Please Enter single number between 1 - 3",
                        "Please Enter single number between 1 - 4",
                        "Please Enter single number between 1 - 6",
                        "Please Enter alphabet English and numbers only",
                        "Please Enter alphabet English only",
                        "Please enter Date in formy YYYY-MM-DD",
                        "Please enter valid number E.g. 01XXXXXXXXX",
                        "Please enter only M or F"};


#endif
