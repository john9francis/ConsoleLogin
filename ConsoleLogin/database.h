// for comments on the header file syntax, see account.h

#ifndef DATABASE_H
#define DATABASE_H

#include <list>
#include <string>

// since we use the Account class, we include it's header file.

#include "account.h"

class Database {

private:
	std::list<Account> _accountList;

public:
	Database();

	void AddAccount();
	void DisplayDatabase();
	std::string GetUsername();

	bool CheckUsernameValidity(std::string username);

	bool CheckUser(std::string username, std::string password);

};

#endif