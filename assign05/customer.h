// File: customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "address.h"

// put your Customer class here

class Customer
{
   std::string name;
   Address address;

  public:
   Customer();
   Customer(string name, Address address);
   string getName();
   void setName(string name);
   Address getAddress();
   void setAddress(Address address);
   void display();
};

#endif
