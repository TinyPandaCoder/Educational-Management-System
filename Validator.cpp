//
// Created by Mahmoud Alaa on 5/3/2024.
//
#include "Validator.h"

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
