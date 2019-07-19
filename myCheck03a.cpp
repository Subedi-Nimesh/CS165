/***********************************************************************
* Program:
*    Checkpoint 03a, Exceptions
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary:
*
************************************************************************/

#include <iostream>
using namespace std;

int promptNumber();
void catchAndDisplay(int &number);
/**********************************************************************
 *
 ***********************************************************************/
int main()
{
   int number = promptNumber();
   
   catchAndDisplay(number);
   return 0;
}

int promptNumber()
{
   int number;
   cout << "Enter a number: ";
   cin >> number;
   
   return number;
}

void catchAndDisplay(int &number)
{
   try
   {
      if (number > 100)
         throw string ("The number cannot be greater than 100.");
      else if (number < 0)
         throw string ("The number cannot be negative.");
      else if (number % 2 != 0)
         throw string ("The number cannot be odd.");
      else
         throw number;
   }
   catch (string words)
   {
      cout << "Error: " << words;
      cout << endl;
   }   
   catch (int num)
   {
      cout << "The number is " << num << ".";
      cout << endl;
   }   
   
}
