#ifndef EDUCATIONAL_OOP_PRINCIPAL_H
#define EDUCATIONAL_OOP_PRINCIPAL_H
#include "Person.h"



class principal : public person {
private:
    void addStudent();
    void addTeacher();
public:
    principal()
    {
        //For demonstration only don't type these information in code
        string adminUsername="root";
        string adminPassword="password";
        string adminFirstName="Maher";
        string adminLastName="Mahmoud";

        setUsername(adminUsername);
        setPassword(adminPassword);
        setFirstName(adminFirstName);
        setLastName(adminLastName);
    }
};
#endif