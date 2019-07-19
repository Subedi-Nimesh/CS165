/***********************************************************************
* Program:
*    Assignment 01, Genetic Genealogy
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary: 
*    The program compares dna of relatives and displays similarity
*    Percentages.
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int getDNA(char dna[][10]);
void getRelativeNames(string name[], int number);
void getRelativeDna(string name[], char dna[][10], int number);
void displayMatch(string name[], char dna[][10], int number);

/**********************************************************************
 * Main function
 ***********************************************************************/
int main()
{
   char dna[50][10];
   string name[256];
   int number = getDNA(dna);
   getRelativeNames(name, number);
   getRelativeDna(name, dna, number);
   displayMatch(name, dna, number);
   return 0;
}

/**************************************************************
 * Gets dna sequence and number of potential relatives.
 *************************************************************/
int getDNA(char dna[][10])
{
   int number;
   cout << "Enter your DNA sequence: ";
   for (int i = 0; i < 10; i++)
      cin >> dna[0][i];
   cout << "Enter the number of potential relatives: ";
   cin >> number;
   cout << endl;
   return number;
}

/***************************************************************
 * Gets names of relatives.
 **************************************************************/
void getRelativeNames(string name[], int number)
{
   for (int i = 0; i < number; i++)
   {
      cout << "Please enter the name of relative #" << i + 1 << ": ";
      cin >> name[i];
   }
   cout << endl;
   return;
}

/***************************************************************
* gets the dna sequences of relatives.
**************************************************************/
void getRelativeDna(string name[], char dna[][10], int number)
{
   for (int i = 1; i <= number; i++)
   {
      cout << "Please enter the DNA sequence for " << name[i - 1] << ": ";
      for (int j = 0; j < 10; j++)
      {
         cin >> dna[i][j];
      }
   }
   cout << endl;
}

/***************************************************************
* displays the similarity percentage of the relatives.
**************************************************************/
void displayMatch(string name[], char dna[][10], int number)
{
   int count;
   for (int i = 1; i <= number; i++)
   {
      count = 0;
      for (int j = 0; j < 10; j++)
      {
         if (dna[0][j] == dna[i][j])        
         {
            count = count + 10;
         }
      }
      cout << "Percent match for " << name[i - 1] << ": ";
      cout << count << "%" << endl;  
   }
}
