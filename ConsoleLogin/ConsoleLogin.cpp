// "iostream" is where the "cin" and "cout" functions come from

#include <iostream>

// we need to include any classes that we use.

#include "database.h"
#include "account.h"
#include "numberAccount.h"
#include "securityAccount.h"

// main is an int because it returns 0 if it's successful

int main()
{
	// create the database:
	Database accountDatabase;
	bool x = true;

	while (x) {

		// get user input
		std::string input;
		std::cout << "Welcome. Please choose an option." << std::endl;
		std::cout << "To sign in, press 1." << std::endl;
		std::cout << "To create an account, press 2." << std::endl;
		std::cout << "To quit, Press 3." << std::endl;
		std::cin >> input;

		// do what the user wants
		// note: stoi() is like int.Parse()
		if (std::stoi(input) == 1) {
			std::cout << "Please enter your username and password." << std::endl;

			// let the user login
		}
		else if (std::stoi(input) == 2) {
			std::cout << "Please create your account." << std::endl;
			accountDatabase.AddAccount();
		}
		else if (std::stoi(input) == 3) {
			std::cout << "quitting now... " << std::endl;
			x = false;
		}
		else if (std::stoi(input) == 4) {
			std::cout << "you chose the secret developer setting to ";
			std::cout << "display all the usernames and passwords..." << std::endl;
			accountDatabase.DisplayDatabase();
		}
		else {
			std::cout << "sorry, I didn't recognize that response. ";
			std::cout << "please input 1, 2, or 3 and press enter. " << std::endl;
		}
	}

	//system("pause") is just makes it so the console doesn't close immediately.
	
	system("pause");

}

// other functions


