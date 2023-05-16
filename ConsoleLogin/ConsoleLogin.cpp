#include <iostream>
#include "account.cpp"

int main()
{
	std::cout << "Hello World!\n";

	Account myAccount;
	myAccount.CreateAccount();
	myAccount.DisplayAccount();

	system("pause");

}
