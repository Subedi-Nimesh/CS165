/***************************************************************
 * File: product.h
 * Author: (Nimesh Subedi)
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

// put your class definition here

class Product
{
   float price;
   float weight;
   std::string name;
   std::string description;
   
  public:
   Product();
   Product(string name, string description,
           float price, float weight);
   
   void prompt();
   string getName();
   void setName(string name);
   string getDescription();
   void setDescription(string description);
   float getBasePrice();
   void setBasePrice(float price);
   float getWeight();
   void setWeight(float weight);
   float getSalesTax();
   float getShippingCost();
   float getTotalPrice();
   void displayAdvertising();
   void displayInventory();
   void displayReceipt();
};

#endif
