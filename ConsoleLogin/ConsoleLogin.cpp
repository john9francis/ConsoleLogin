// "iostream" is where the "cin" and "cout" functions come from

#include <iostream>

// we need to include any classes that we use.

#include "database.h"
#include "account.h"
#include "numberAccount.h"
#include "securityAccount.h"

// initialize the other functions BEFORE the main function:
bool Login(Database database);

// main is an int because it returns 0 if it's successful

int main()
{
	// create the database:
	Database accountDatabase;
	bool x = true;

	while (x) {

		// get user input
		std::string input;
		system("cls"); // this clears the console
		std::cout << "Welcome. Please choose an option." << std::endl;
		std::cout << "To sign in, press 1." << std::endl;
		std::cout << "To create an account, press 2." << std::endl;
		std::cout << "To quit, Press 3." << std::endl;
		std::cin >> input;

		// do what the user wants
		// note: stoi() is like int.Parse()

		if (std::stoi(input) == 1) {

			// 1 = Login

			std::cout << "Please enter your username and password." << std::endl;

			if (Login(accountDatabase)) {
				std::cout << "Logging in...";
				x = false;
			}
			else {
				std::cout << "invalid username or password. ";
				std::cout << "Going back to main menu... " << std::endl;
			}

			system("pause");
		}
		else if (std::stoi(input) == 2) {

			// 2 = create account

			std::cout << "Please create your account." << std::endl;
			accountDatabase.AddAccount();
			system("pause");

		}
		else if (std::stoi(input) == 3) {

			// 3 = quit

			std::cout << "quitting now... " << std::endl;
			x = false;
			system("pause");
		}
		else if (std::stoi(input) == 4) {

			// 4 = display all usernames and passwords (secret method)

			system("cls");
			std::cout << "you chose the secret developer setting to ";
			std::cout << "display all the usernames and passwords..." << std::endl;
			accountDatabase.DisplayDatabase();
			system("pause");
		}
		else {

			// any other input = unknown

			std::cout << "sorry, I didn't recognize that response. ";
			std::cout << "please input 1, 2, or 3 and press enter. " << std::endl;
			system("pause");
		}
	}	

}

// other functions

bool Login(Database database) {
	std::string username;
	std::string password;

	std::cout << "Username: ";
	std::cin >> username;
	std::cout << "Password: ";
	std::cin >> password;

	return database.CheckUser(username, password);
}
