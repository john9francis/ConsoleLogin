#include "numberAccount.h"
#include <iostream>
#include <string>

NumberAccount::NumberAccount() {

}

bool NumberAccount::CheckUsernameValidity(std::string username) {
	
	return true;
}

bool NumberAccount::CheckPasswordValidity(std::string password) {
	try {
		int x = std::stoi(password);
		return true;
	}
	catch (const std::invalid_argument& e) {
		return false;
	}
	
}