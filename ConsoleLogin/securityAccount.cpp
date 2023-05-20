#include "securityAccount.h"
#include <iostream>
#include <string>

SecurityAccount::SecurityAccount() {

}

bool SecurityAccount::CheckPasswordValidity(std::string username) {
	bool containsNumber = false;
	bool containsSymbol = false;
	for (char letter : username) {
		// required symbols: !,@,#,$,%
		switch (letter) {
		case '!':
			containsSymbol = true;
			break;
		case '@':
			containsSymbol = true;
			break;
		case '#':
			containsSymbol = true;
			break;
		case '$':
			containsSymbol = true;
			break;
		case '%':
			containsSymbol = true;
			break;
		default:
			break;
		}

		// Check if it's a number
		if (isdigit(letter)) {
			containsNumber = true;
		}
	}
	if (containsNumber && containsSymbol) {
		return true;
	}

	return false;
}

