#include "numberAccount.h"
#include <iostream>
#include <string>

NumberAccount::NumberAccount() {

}


bool NumberAccount::CheckPasswordValidity(std::string password) {
	bool valid = true;
	for (char letter : password) {
		if (!isdigit(letter)) {
			valid = false;
		}
	}

	return valid;
	
}