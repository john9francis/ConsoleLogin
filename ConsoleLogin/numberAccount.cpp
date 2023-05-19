#include "numberAccount.h"
#include <iostream>
#include <string>

NumberAccount::NumberAccount() {

}

void NumberAccount::CreateAccount() {
	std::string username;
	std::string password;

	std::cout << "Number Username: ";
	std::getline(std::cin, username);
	std::cout << "Number Password: ";
	std::getline(std::cin, password);

	// save the username and password to the account object
	
	this->SetUsername(username);
	this->SetPassword(password);

	Account::CreateAccount();
}