/***********************************************************************
* Program:
*    Checkpoint 10a, Vectors
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
************************************************************************/

#include <iostream>
#include <vector>
#include <string>
using namespace std;


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
	vector <int> num;
	int number;
	number = 1;
	while (number != 0)
	{
		cout << "Enter int: ";
		cin >> number;
		if (number != 0)
			num.push_back(number);
 	}
 	cout << "Your list is:\n";
 	for (int it = 0; it < num.size(); it++)
   {
     	cout << num[it];
   	cout << endl;
	}
	cout << endl;
	
	vector <string> words;
	cout << "Enter string: ";
	string text;
	cin >> text;
	while (text != "quit")
	{
		cout << "Enter string: ";
		words.push_back(text);
		cin >> text;
 	}

	cout << "Your list is:\n";
 	for (vector <string> :: iterator it = words.begin();
        it < words.end();
        it++)
      cout << *it << endl;

   return 0;
}


