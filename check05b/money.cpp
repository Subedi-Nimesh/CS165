/***********************
 * File: money.cpp
 ***********************/

#include <iostream>
#include <iomanip>
using namespace std;

#include "money.h"

Money :: Money()
{
   dollars = 0;
   cents = 0;
}

Money :: Money(int dollars)
{
   if (dollars < 0)
      this->dollars = dollars * -1;
   else
      this->dollars = dollars;
   
   cents = 0;
}

Money :: Money(int dollars, int cents)
{
   if (dollars < 0)
      this->dollars = dollars * -1;
   else
      this->dollars = dollars;
if (cents < 0)
      this->cents = cents * -1;
   else
      this->cents = cents;
}

/*****************************************************************
 * Function: prompt
 * Purpose: Asks the user for values for dollars and cents
 *   and stores them.
 ****************************************************************/
void Money :: prompt()
{
   int dollars;
   int cents;

   cout << "Dollars: ";
   cin >> dollars;

   cout << "Cents: ";
   cin >> cents;

   setDollars(dollars);
   setCents(cents);
}

/*****************************************************************
 * Function: display
 * Purpose: Displays the value of the money object.
 ****************************************************************/
void Money :: display() const 
{
   cout << "$" << getDollars() << ".";
   cout << setfill('0') << setw(2) << getCents();
}

/*****************************************************************
 * Returns the value of Dollars.
 ****************************************************************/
int Money::getDollars() const
{
   return this->dollars;
}

/*****************************************************************
 * Returns the value of Cents.
 ****************************************************************/
int Money::getCents() const
{
   return this->cents;
}

/*****************************************************************
 * Sets dollars.
 ****************************************************************/
void Money::setDollars(int dollars)
{
   if (dollars < 0)
      dollars = dollars * -1;
   this->dollars = dollars;
}

/*****************************************************************
 * Sets cents.
 ****************************************************************/
void Money::setCents(int cents)
{
   if (cents < 0)
      cents = cents * -1;
   this->cents = cents;
}


