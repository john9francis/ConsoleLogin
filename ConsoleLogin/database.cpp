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
		std::string username = this->GetUsername();
		newAccount.CreateAccount(username);
		_accountList.push_back(newAccount);
	}
	else if (accountType == "number") {
		std::cout << "Creating a number account. Make sure your password is only numbers." << std::endl;
		NumberAccount newAccount;
		std::string username = this->GetUsername();
		newAccount.CreateAccount(username);
		_accountList.push_back(newAccount);
	}
	else if (accountType == "secure") {
		std::cout << "Creating the most secure account. Your password must include a number and a symbol (!,@,#,$,%)" << std::endl;
		SecurityAccount newAccount;
		std::string username = this->GetUsername();
		newAccount.CreateAccount(username);
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

std::string Database::GetUsername() {
	std::string username;
	bool valid = false;

	while (!valid) {

		std::cout << "Enter Username: ";
		std::cin >> username;
		if (this->CheckUsernameValidity(username)) {
			valid = true;
		}
		else {
			std::cout << "Sorry, this username is already in the system. "; 
			std::cout << "Please enter a different username." << std::endl;
		}
	}
	return username;
}

bool Database::CheckUsernameValidity(std::string username) {

	for (Account a : _accountList) {
		if (a.GetUsername() == username) {
			return false;
		}
	}
	return true;
}

