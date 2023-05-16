#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string _username;
    std::string _password;

public:
    Account();
    Account(std::string username, std::string password);
    void DisplayAccount();
    void SetUsername(std::string username);
    std::string GetUsername();
    void SetPassword(std::string password);
    std::string GetPassword();
    void CreateAccount();
};

#endif