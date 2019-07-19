/********************************************************************
 * File: date.cpp
 * Purpose: Holds the implementation of the Date class methods.
 ********************************************************************/
#include <iostream>
#include "date.h"

using namespace std;

// Put your method bodies here...
void Date::set(int month, int day, int year)
{
   this->month = month;
   this->day = day;
   this->year = year;
}

void Date::displayAmerican()
{
   cout << this->month << "/" << this->day << "/" << this->year << endl;
}

void Date::displayEuropean()
{
   cout << this->day << "/" << this->month << "/" << this->year << endl;
}

void Date::displayISO()
{
   cout << this->year << "-" << this->month << "-" << this->day << endl;
}
