/***********************************************************************
* Program:
*    Checkpoint 01b, Arrays
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary: 
*    
************************************************************************/

#include <iostream>
using namespace std;

int getSize();
void getList(int numbers[], int size);
void displayMultiples(int numbers[], int size);

/**********************************************************************
 * Main function
 ***********************************************************************/
int main()
{
   int size = getSize();
   int numbers[size];
   getList(numbers, size);
   displayMultiples(numbers, size);
   return 0;
}

/**************************************************************
 * Gets size from the user.
 *************************************************************/
int getSize()
{
   int size;
   cout << "Enter the size of the list: ";
   cin >> size;
   return size;
}

/***************************************************************
 * Gets numbers from the user
 **************************************************************/
void getList(int numbers[], int size)
{
   for (int i = 0; i < size; i++)
   {
      cout << "Enter number for index " << i << ": ";
      cin >> numbers[i];
   }
   cout << endl;
   return;
}

/***************************************************************
* displays the number multiple of 3.
**************************************************************/
void displayMultiples(int numbers[], int size)
{
   cout << "The following are divisible by 3:\n";
   for (int i = 0; i < size; i++)
   {
      if (numbers[i] % 3 == 0)
         cout << numbers[i] << endl;
   }
}
