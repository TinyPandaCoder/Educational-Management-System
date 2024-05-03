#include "Person.h"
class principal : public person {
private:
    void addStudent();
    void addTeacher();
public:
    principal()
    {
        setUsername("root");
        setPassword("password");
        setFirstName("Maher");
        setLastName("Mahmoud");
    }
    friend class school;


};
