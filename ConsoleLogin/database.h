#ifndef DATABASE_H
#define DATABASE_H

#include <list>
#include <string>
#include "account.h"

class Database {
private:
	std::list<Account> _accountList;

public:
	Database();
	void AddAccount();
	void DisplayDatabase();
	bool CheckPassword(const std::string& password);

};

#endif