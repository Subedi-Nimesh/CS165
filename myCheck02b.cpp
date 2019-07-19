/***********************************************************************
* Program:
*    Checkpoint 02b, Complex Numbers
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary: 
*    Summaries are not necessary for checkpoint assignments.
* ***********************************************************************/

#include <iostream>
using namespace std;

// TODO: Define your Complex struct here
struct Complex
{
   double c1;
   double c2;
   double sum;
};

// TODO: Add your prompt function here

void prompt(Complex &input)

{
   cout << "Real: ";
   cin >> input.c1;
   cout << "Imaginary: ";
   cin >> input.c2;
}

// TODO: Add your display function here

void display(Complex output)
{
   cout << output.c1 << " + " << output.c2 << "i";
}

/**********************************************************************
 * Function: addComplex
 * Purpose: Adds two complex numbers together and returns the sum.
 ***********************************************************************/
Complex addComplex(const Complex &x, const Complex &y)
{
   // TODO: Fill in the body of the add function
   Complex sum;
   sum.c1 = x.c1 + y.c1;
   sum.c2 = x.c2 + y.c2;
   return sum;
}


/**********************************************************************
 * Function: main
 * Purpose: This is the entry point and driver for the program.
 ***********************************************************************/
int main()
{
   // Declare two Complex objects, c1 and c2
   Complex c1;
   Complex c2;
   
   // Call your prompt function twice to fill in c1, and c2 
   prompt(c1);
   prompt(c2);
   
   // Declare another Complex for the sum
   Complex sum;
   
   // Call the addComplex function, putting the result in sum;
   sum = addComplex(c1, c2);
   
   cout << "\nThe sum is: ";
   display(sum);
   cout << endl;
   
   return 0;
}
