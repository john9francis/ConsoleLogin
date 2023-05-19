// "iostream" is where the "cin" and "cout" functions come from

#include <iostream>

// we need to include any classes that we use. Specifically the cpp files.

/*
#include "account.cpp"
#include "database.cpp"
#include "numberAccount.cpp"
#include "securityAccount.cpp"
*/

#include "database.h"
#include "account.h"
#include "numberAccount.h"
#include "securityAccount.h"

// main is an int because it returns 0 if it's successful

int main()
{
	// main program:

	
	Database accountDatabase;
	accountDatabase.AddAccount();
	accountDatabase.AddAccount();
	accountDatabase.DisplayDatabase();
	

	//testing
	/*
	Account* n = new NumberAccount();
	n->CreateAccount();
	n->DisplayAccount();
	delete n;

	Account* a = new Account();
	a->CreateAccount();
	a->DisplayAccount();
	delete a;

	Account* s = new SecurityAccount();
	s->CreateAccount();
	s->DisplayAccount();
	delete s;
	*/

	//system("pause") is just makes it so the console doesn't close immediately.
	
	system("pause");

}
