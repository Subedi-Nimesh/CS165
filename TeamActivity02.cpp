/***********************************************************************
* Program:
*    Assignment ##, ????
*    Brother Clements, CS165
* Author:
*    Nimesh Subedi
* Summary: 
*    Enter a brief description of your program here!
************************************************************************/

#include <iostream>
using namespace std;

struct Scripture
{
   string bName;
   int chapter;
   int verse;
};

void promptScriptures(Scripture & input)
{
      cout << "Enter Book: ";
      getline(cin, input.bName);
      cout << "Enter Chapter: ";
      cin >> input.chapter;
      cout << "Enter Verse: ";
      cin >> input.verse;
}

void display(Scripture output)
{
   cout << output.bName << " "
        << output.chapter << ":"
        << output.verse << endl;
}
/**********************************************************************
 * Add text here to describe what the function "main" does.
 ***********************************************************************/
int main()
{
   Scripture alma;   
   promptScriptures(alma);
   display(alma);
   
   return 0;
}
