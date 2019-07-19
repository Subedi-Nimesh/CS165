// File: address.cpp

#include "address.h"
#include<iostream>

using namespace std;

// Put your method bodies for the address class here

/***************************************
 * Default Constructor
 **************************************/
Address :: Address()
{
   street = "unknown";
   city = "";
   state = "";
   zip = "00000";
}

/***************************************
 * Non-Default Constructor
 **************************************/
Address :: Address(string street, string city,
                   string state, string zip)
{
   this->street = street;
   this->city = city;
   this->state = state;
   this->zip = zip;
}

/***************************************
 * Returns street address
 **************************************/
string Address::getStreet()
{
   return this->street;
}

/*****************************************
 * Sets the street entered by the user.
 ****************************************/
void Address::setStreet(string street)
{
   this->street = street;
}

/***************************************
 * Returns the City from the class.
 **************************************/
string Address::getCity()
{
   return this->city;
}

/*****************************************
 * Sets the City entered by the user.
 ****************************************/
void Address::setCity(string city)
{
   this->city = city;
}

/***************************************
 * Returns State from the class.
 **************************************/
string Address::getState()
{
   return this->state;
}

/*****************************************
 * Sets the state entered by the user.
 ****************************************/
void Address::setState(string state)
{
   this->state = state;
}

/***************************************
 * Returns Zip of the address
 **************************************/
string Address::getZip()
{
   return this->zip;
}

/**************************************************
 * Sets the Zip of the address entered by the user.
 *************************************************/
void Address::setZip(string zip)
{
   this->zip = zip;
}

/***************************************
 * Displays the complete Address.
 **************************************/
void Address::display()
{
   cout << street << endl << city << ", "
        << state << " " << zip << endl;
}
