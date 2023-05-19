// "ifndef" means "if not defined." so if there is already a 
// "ACCOUNT_H" defined, this won't run. therefore avoiding errors.

#ifndef ACCOUNT_H
#define ACCOUNT_H

// we need to include non built in data types:

#include <string>

class Account {

private:
    std::string _username;
    std::string _password;
    bool _valid = false;

public:
    Account();
    Account(std::string username, std::string password);
    void DisplayAccount() const;

    // NOTE: the "const" keyword protects the variable so the function can't modify 
    // it, only access it. in other words it makes this function "read only."

    void SetUsername(std::string username);
    std::string GetUsername() const;
    void SetPassword(std::string password);
    std::string GetPassword() const;
    void CreateAccount();
};

// this is ending the #ifndef from above.

#endif