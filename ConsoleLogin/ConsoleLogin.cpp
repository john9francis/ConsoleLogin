// "iostream" is where the "cin" and "cout" functions come from

#include <iostream>

// we need to include any classes that we use. Specifically the cpp files.

#include "account.cpp"
#include "database.cpp"
#include "numberAccount.cpp"

// main is an int because it returns 0 if it's successful

int main()
{
	// main program:

	/*
	Database accountDatabase;
	accountDatabase.AddAccount();
	accountDatabase.AddAccount();
	accountDatabase.DisplayDatabase();
	*/

	//testing

	NumberAccount n;
	n.CreateAccount();
	n.DisplayAccount();

	// system("pause") is just makes it so the console doesn't close immediately.
	
	system("pause");

}
