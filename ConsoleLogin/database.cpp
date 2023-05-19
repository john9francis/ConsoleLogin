#include "database.h"
#include "account.h"
#include <iostream>
#include <list>

Database::Database() {
}

void Database::AddAccount() {
	// initialize a new account
	Account newAccount;
	newAccount.CreateAccount();
	_accountList.push_back(newAccount);
}

void Database::DisplayDatabase() {
	for (const Account& account : _accountList) {
		account.DisplayAccount();
	}
}

