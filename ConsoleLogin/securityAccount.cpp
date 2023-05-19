#include "securityAccount.h"
#include <iostream>
#include <string>

SecurityAccount::SecurityAccount() {

}

void SecurityAccount::CreateAccount() {
	std::string username;
	std::string password;

	std::cout << "Secure Username: ";
	std::getline(std::cin, username);
	std::cout << "Secure Password: ";
	std::getline(std::cin, password);

	// save the username and password to the account object

	this->SetUsername(username);
	this->SetPassword(password);

}