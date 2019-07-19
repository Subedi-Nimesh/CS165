/***************************************************************
 * File: product.h
 * Author: (Nimesh Subedi)
 * Purpose: Contains the definition of the Product class
 ***************************************************************/
#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

// put your class definition here

class Product
{
   float price;
   float weight;
   std::string name;
   std::string description;
   
  public:
   void prompt();
   float getSalesTax();
   float getShippingCost();
   float getTotalPrice(float salesTax, float shippingCost);
   void displayProfile();
   void displayInventory();
   void displayReceipt(float salesTax, float shippingCost, float totalPrice);
};

#endif
