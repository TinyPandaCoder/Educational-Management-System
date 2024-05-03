//
// Created by Mahmoud Alaa on 5/3/2024.
//
#include "Input.h"

string input::getUsername() const {
    return this->username;
}

string input::getPassword() const {
    return this->password;
}
string input::getRole() const {
    return this->role;
}

regex input::getReg(int idx) const {
    return this->reg[idx];
}

string input::getError(int idx) const {
    return this->error[idx];
}

void input::setUsername(string username) {
    this->username=username;
}

void input::setPassword(string password) {
    this->password=password;
}

string input::validatation(int idx)
{
    string inp;
    while (cin>>inp)
    {
        if (!regex_match(inp,reg[idx]))
        {
            cout<<this->error[idx]<<'\n';
        }
        else
            return inp;
    }
    return "-1";
}

void input::getinput() {
    cout<<"Welcome to school Water Law !\n";
    cout<<"Who would like to log in?\n";
    cout<<"1- Principal\n";
    cout<<"2- Student\n";
    cout<<"3- Teacher\n";
    this->role=validatation(1);
    cout<<"Please enter your username:";
    this->username=validatation(4);
    cout<<"Please enter your password:";
    this->password=validatation(4);
}


