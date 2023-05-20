#include "numberAccount.h"
#include <iostream>
#include <string>

NumberAccount::NumberAccount() {

}

void NumberAccount::CreateAccount(std::string username) {
	std::string password;

	std::cout << "Number Password : ";
	std::cin >> password;

	// save the username and password to the account object
	
	this->SetUsername(username);
	this->SetPassword(password);
}

bool NumberAccount::CheckUsernameValidity(std::string username) {
	return true;
}

bool NumberAccount::CheckPasswordValidity(std::string password) {
	return true;
}