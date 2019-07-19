/***********************************************************************
* Program:
*    Checkpoint 02a, Structs  
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

struct user
{
   string fName;
   string lName;
   int id;
};

void prompt(user & input);
void display(const user & output);

/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   user user;
   prompt (user);
   display(user);
   return 0;
}

void prompt(user & input)
{
   cout << "Please enter your first name: ";
   getline(cin, input.fName);
   cout << "Please enter your last name: ";
   getline(cin, input.lName);
   cout << "Please enter your id number: ";
   cin >> input.id;
}

void display(const user & output)
{
   cout << endl;
   cout << "Your information:" << endl
        << output.id << " - "
        << output.fName << " "
        << output.lName << endl;
}
