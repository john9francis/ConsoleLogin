#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string _username;
    std::string _password;

public:
    Account(std::string username, std::string password);
    void DisplayAccount();
};

#endif  // ACCOUNT_H