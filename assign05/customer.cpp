// File: customer.cpp

#include "customer.h"
#include <iostream>

using namespace std;

// Put the method bodies for your customer class here

/***************************************
 * Default Constructor.
 **************************************/
Customer::Customer()
{
   name = "unspecified";
}

/***************************************
 * Non-Default Constructor
 **************************************/
Customer::Customer(string name, Address address)
{
   this->name = name;
   this->address = address;
}

/***************************************
 * Returns Name from the variable.
 **************************************/
string Customer::getName()
{
   return this->name;
}

/*****************************************
 * Sets the Name of the customer entered
 * by the user.
 ****************************************/
void Customer::setName(string name)
{
   this->name = name;
}

/***************************************
 * Returns The adderess of the customer
 **************************************/
Address Customer::getAddress()
{
   return this->address;
}

/*****************************************
 * Sets the Address of the customer entered
 * by the user.
 ****************************************/
void Customer::setAddress(Address address)
{
   this->address = address;
}

/***************************************
 * Displays the name and the address of
 * the customer.
 **************************************/
void Customer::display()
{
   cout << name << endl;
   address.display();
}
