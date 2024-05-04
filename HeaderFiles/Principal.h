#ifndef EDUCATIONAL_OOP_Principal_H
#define EDUCATIONAL_OOP_Principal_H
#include "Person.h"

//For demonstration only don't type these information in code
string adminUsername="root";
string adminPassword="password";
string adminFirstName="Maher";
string adminLastName="Mahmoud";

class principal : public person {
private:
    void addStudent();
    void addTeacher();
public:
    principal()
    {
        setUsername(adminUsername);
        setPassword(adminPassword);
        setFirstName(adminFirstName);
        setLastName(adminLastName);
    }
};
#endif