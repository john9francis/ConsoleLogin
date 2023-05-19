#include <iostream>
#include "account.cpp"
#include "database.cpp"

int main()
{
	std::cout << "Hello World!\n";

	Database accountDatabase;
	accountDatabase.AddAccount();
	accountDatabase.AddAccount();
	accountDatabase.DisplayDatabase();

	system("pause");

}
