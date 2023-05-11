#include "account.h"
#include <iostream>

Account::Account(std::string username, std::string password) {
	_username = username;
	_password = password;
}

void Account::DisplayAccount() {
	std::cout << _username << " " << _password;
}