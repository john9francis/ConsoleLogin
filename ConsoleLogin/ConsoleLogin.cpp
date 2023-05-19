#include <iostream>
#include "account.cpp"
#include "database.cpp"

int main()
{
	std::cout << "Hello World!\n";

	Account myAccount;
	myAccount.CreateAccount();
	myAccount.DisplayAccount();

	Database accountDatabase;

	system("pause");

}
