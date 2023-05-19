#include "database.h"
#include "account.h"
#include "numberAccount.h"
#include "securityAccount.h"
#include <iostream>
#include <list>

Database::Database() {

}

void Database::AddAccount() {

	// ask user what type of account they need:

	std::string accountType;

	std::cout << "What kind of account would you like to create?";
	std::cout << "(normal, number, or secure): ";

	std::cin >> accountType;

	if (accountType == "normal") {
		std::cout << "Creating a normal account..." << std::endl;
		Account newAccount;
		newAccount.CreateAccount();
		_accountList.push_back(newAccount);
	}
	else if (accountType == "number") {
		std::cout << "Creating an account that uses only numbers..." << std::endl;
		NumberAccount newAccount;
		newAccount.CreateAccount();
		_accountList.push_back(newAccount);
	}
	else if (accountType == "secure") {
		std::cout << "Creating the most secure account..." << std::endl;
		SecurityAccount newAccount;
		newAccount.CreateAccount();
		_accountList.push_back(newAccount);
	}
	else {
		std::cout << "Unknown account type. Account creation failed. " << std::endl;
	}

}

void Database::DisplayDatabase() {
	for (const Account& account : _accountList) {
		account.DisplayAccount();
	}
}

