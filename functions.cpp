#include <iostream>
#include <string>
#include "functions.h"

using namespace std;

int menu()
{
	int choice;
	cout << "Menu options" << endl;
	cout << "1. Timer: " << endl;
	cout << "2. Concat strings: " << endl;
	cout << "3. Exit: " << endl;
	cin >> choice;
	return choice;
}

#include <thread>

void timer()
{
	auto start = chrono::high_resolution_clock::now();
	this_thread::sleep_for(chrono::seconds(5));
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::seconds>(end - start).count();
	cout << "Time taken: " << duration << " seconds" << endl;
}


void addStr(string str1, string str2, string str3)
{
	string str4 = str1 + str2 + str3;
	cout << "concat str = " << str4 << endl;
}
