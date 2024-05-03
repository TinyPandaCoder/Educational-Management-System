#include <iostream>
#include <regex>
using namespace std;
class input{
private:
    friend class principal;
    std::string username;
    std::string password;
    string role;
    regex reg[9]={regex("[1-2]"),regex("[1-3]"),regex("[1-4]"),regex("[1-6]"),regex("[a-zA-Z0-9]*"),regex("[a-zA-Z]*"),regex("^\\d{4}\\-(0?[1-9]|1[012])\\-(0?[1-9]|[12][0-9]|3[01])$"),regex("^01{1}(0|1|2|5)\\d{8}$"),regex("^(M|F)$")};
    string error[9]={"Please Enter single number between 1 - 2",
                          "Please Enter single number between 1 - 3",
                          "Please Enter single number between 1 - 4",
                          "Please Enter single number between 1 - 6",
                          "Please Enter alphabet English and numbers only",
                          "Please Enter alphabet English only",
                          "Please enter Date in formy YYYY-MM-DD",
                          "Please enter valid number E.g. 01XXXXXXXXX",
                          "Please enter only M or F"};
public:


    string getUsername() const;
    string getPassword() const;
    string getRole() const;
    regex getReg(int idx) const ;
    string getError(int idx)const;
    string validatation(int idx);
    void setUsername(string username);
    void setPassword(string password);
    void getinput();


};
