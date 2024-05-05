//
// Created by Mahmoud Alaa on 5/3/2024.
//
#include "../HeaderFiles/Validator.h"

regex Validator::reg[10]={regex("[1-3]"),
                         regex("[1-3]"),
                         regex("[1-5]"),
                         regex("[1-6]"),
                         regex("[a-zA-Z0-9]*"),
                         regex("[a-zA-Z]*"),
                         regex("^\\d{4}\\-(0?[1-9]|1[012])\\-(0?[1-9]|[12][0-9]|3[01])$"),
                         regex("^01{1}(0|1|2|5)\\d{8}$"),regex("^(M|F)$"),
                         regex("^[0-9]+\\.?[0-9]*")
};
string Validator::error[10]={"Please Enter single number between 1 - 3",
                            "Please Enter single number between 1 - 3",
                            "Please Enter single number between 1 - 5",
                            "Please Enter single number between 1 - 6",
                            "Please Enter alphabet English and numbers only",
                            "Please Enter alphabet English only",
                            "Please enter Date in form YYYY-MM-DD",
                            "Please enter valid number E.g. 01XXXXXXXXX",
                            "Please enter only M or F",
                            "Please Enter Real Number only"};


bool Validator::validatation(int idx,string& inp)
{
    if (!regex_match(inp,reg[idx]))
    {
        cout<<error[idx]<<'\n';
        return false;
    }
    else
        return true;
}


bool Validator::validateStudentPanel(string &inp) {
    return Validator::validatation(0,inp);
}

bool Validator::validateLogInPanel(string &inp) {
    return Validator::validatation(1,inp);
}

bool Validator::validateTeacherPanel(string &inp) {
    return Validator::validatation(2,inp);
}

bool Validator::validatePrincipalPanel(string &inp) {
    return Validator::validatation(3,inp);

}
bool Validator::validateUsername(string &inp) {
    return Validator::validatation(4,inp);
}

bool Validator::validatePassword(string &inp) {
    return Validator::validatation(4,inp);

}

bool Validator::validateName(string &inp) {
    return Validator::validatation(5,inp);

}

bool Validator::validateDate(string &inp) {
    return Validator::validatation(6,inp);
}

bool Validator::validatePhoneNumber(string &inp) {
    return Validator::validatation(7,inp);

}

bool Validator::validateGender(string &inp) {
    return Validator::validatation(8,inp);

}

bool Validator::validateRealNumber(string &inp) {
    return Validator::validatation(9,inp);
}
