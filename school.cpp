//
// Created by Mahmoud Alaa on 5/3/2024.
//
#ifndef EDUCATIONAL_OOP_SCHOOL_H
#include "School.h"
#endif

int school::getIdCounter() {
    return this->idCounter;
}

void school::setIdCounter() {
    this->idCounter++;
}

school::school() {
    
    cout<<"\t\tWelcome to school Water Law !\t\t\n\n";
    cout<<"\t\tWho would like to log in?\t\t\n";
    cout<<"\t\t1- Principal\n";
    cout<<"\t\t2- Student\n";
    cout<<"\t\t3- Teacher\n";
    string inp;
    this->currentRole=Validator::validateLogInPanel(inp);
    cout<<"Please enter your username:";
    this->usernameCurrnet=Validator::validateUsername(inp);
    cout<<"Please enter your password:";
    this->passwordCurrent=Validator::validatePassword(inp);

}

