/***********************************************************************
* Program:
*    Checkpoint 04a, Classes
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

class Books
{
   string title;
   string author;

public:
   void prompt();
   void display();
};

void Books::prompt()
{
   string title;
   string author;
   
   cout << "Title: ";
   getline(cin, title);
   cout << "Author: ";
   getline(cin, author);

   this->title = title;
   this->author = author;
}

void Books::display()
{
   cout << "\"" << title << "\"" << " by " << author << endl;
}

int main()
{
   Books books;
   books.prompt();
   books.display();
   return 0;
}
