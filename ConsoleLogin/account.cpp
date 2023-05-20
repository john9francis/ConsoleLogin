#include "account.h"
#include <iostream>

Account::Account() {

}

Account::Account(std::string username, std::string password) {
	_username = username;
	_password = password;
}

void Account::DisplayAccount() const {
	std::cout << _username << " " << _password << std::endl;
}

void Account::SetUsername(std::string username){
	_username = username;
}

std::string Account::GetUsername() const {
	return _username;
}

void Account::SetPassword(std::string password) {
	_password = password;
}

std::string Account::GetPassword() const {
	return _password;
}

void Account::CreateAccount(std::string username) {
	std::string password;
	bool validPassword = false;

	while (!validPassword) {
		std::cout << "Password: ";
		std::cin >> password;

		if (this->CheckPasswordValidity(password)) {
			validPassword = true;
		}
		else {
			std::cout << "Invalid password. Please try again." << std::endl;
		}
	}
	// save the username and password to the account object

	this->SetUsername(username);
	this->SetPassword(password);
}


bool Account::CheckPasswordValidity(std::string password) {
	return true;
}
