// File: address.h

#ifndef ADDRESS_H
#define ADDRESS_H

#include <string>

using namespace std;

// Put your Address class here

class Address
{
   std::string street;
   std::string city;
   std::string state;
   std::string zip;
   
  public:
   Address();
   Address(string street, string city,
           string state, string zip);
   
   string getStreet();
   void setStreet(string street);
   string getCity();
   void setCity(string city);
   string getState();
   void setState(string state);
   string getZip();
   void setZip(string zip);
   void display();
};

#endif
