#include "account.h"
#include <iostream>

Account::Account() {

}

Account::Account(std::string username, std::string password) {
	_username = username;
	_password = password;
}

void Account::DisplayAccount() const {
	std::cout << _username << " " << _password;
}

void Account::SetUsername(std::string username){
	_username = username;
}

std::string Account::GetUsername() {
	return _username;
}

void Account::SetPassword(std::string password) {
	_password = password;
}

std::string Account::GetPassword() {
	return _password;
}

void Account::CreateAccount() {
	std::cout << "Username: ";
	std::cin >> _username;
	std::cout << "Password: ";
	std::cin >> _password;
	std::cout << "Account successfully created. ";
	std::cout << "\n";
}
