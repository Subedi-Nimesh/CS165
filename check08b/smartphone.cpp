/*******************
 * smartphone.cpp
 *******************/

#include "smartphone.h"
#include <iostream>
using namespace std;

// TODO: Put your SmartPhone methods here
void SmartPhone::prompt()
{
	cout << "Email: " ;
	cin.ignore();
	getline(cin, email);
}

void SmartPhone::display()
{
	Phone::display();
	cout << email << endl;
}