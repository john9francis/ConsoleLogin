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

void Account::CreateAccount() {
	std::cout << "Username: ";
	std::cin >> _username;
	std::cout << "Password: ";
	std::cin >> _password;
	std::cout << "Account successfully created. " << std::endl;

	// requirements: username is not in the system, 
	// password contains a number and a symbol !@#$%

	/*
	* (SECOND TRY)
	while (!_valid) {

		// initialize the pointers we are going to be using

		std::string* pUsername = new std::string;
		std::string* pPassword = new std::string;

		bool* pUsernameValid = false;
		bool* pPasswordValid = false;

		// have user enter their desired username

		std::cout << "Enter Username: ";
		std::cin >> *pUsername;

		// check if username is in the system

		std::cout << "Enter Password: ";
		std::cin >> *pPassword;

		// check if password has desired requirements
		for (size_t i = 0; i < *pPassword->length(); i++) {
			std::cout << *pPassword[i];
		}

		_valid = true;

		delete pUsername;
		delete pPassword;
	}
	*/

	// (WORK IN PROGRESS:)
	/*
	std::string* pUsername = new std::string;

	bool* validU = new bool;
	validU = false;

	while (!validU) {
		std::cout << "Enter Username: ";
		std::cin >> *pUsername;
	}
	*/
}
