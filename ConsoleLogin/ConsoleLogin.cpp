#include <iostream>
#include "account.cpp"

int main()
{
	std::cout << "Hello World!\n";

	Account myAccount("john", "pass");
	myAccount.DisplayAccount();
	std::cout << "\n";

	system("pause");

}
