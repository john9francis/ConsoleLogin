#include "securityAccount.h"
#include <iostream>
#include <string>

SecurityAccount::SecurityAccount() {

}

void SecurityAccount::CreateAccount() {
	std::string username;
	std::string password;

	std::cout << "Secure Username: ";
	std::cin >> username;
	std::cout << "Secure Password: ";
	std::cin >> password;

	// save the username and password to the account object

	this->SetUsername(username);
	this->SetPassword(password);
}

bool SecurityAccount::CheckUsernameValidity(std::string username) {
	return true;
}

bool SecurityAccount::CheckPasswordValidity(std::string password) {
	return true;
}