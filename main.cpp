#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

int main()
{
	int option = menu();
	cout << "You chose option " << option << endl;
	if (option == 1)
	{
		cout << "Staring Timer... " << endl;
		timer();
		return 0;
	}
	else if (option == 2)
	{
		addStr("Simple ", "C++ ", "functions");
	}
	else if (option == 3)
	{
		cout << "Goodbye!" << endl;
	}
	else
	{
		cout << "Invalid option" << endl;
	}
}