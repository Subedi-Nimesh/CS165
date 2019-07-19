/***********************************************************************
* Program:
*    Checkpoint 03b, Errors
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary:
*
************************************************************************/

#include <iostream>

using namespace std;

int prompt();

/**********************************************************************
 *
 ***********************************************************************/
int main()
{
   int number = prompt();
   return 0;
}

int prompt()
{
   int number;
   cout << "Enter a number: ";
   cin >> number;
   
   try
   {
      if (cin.fail())
         throw string ("Invalid input.");
      else
         throw number;
   }
   catch (string words)
   {
      cout << words;
      cout << endl;
      cin.clear();
      cin.ignore(256,'\n');
      prompt();
   }   
   catch (int num)
   {
      cout << "The number is " << num << ".";
      cout << endl;
   }   

   return number;
}
