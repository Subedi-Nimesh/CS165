/***************************************************************
 * File: product.cpp
 * Author: (Nimesh Subedi)
 * Purpose: Contains the method implementations for the Product class.
 ***************************************************************/
#include <iostream>
#include<iomanip>
#include<limits>
#include "product.h"

using namespace std;

// put your method bodies here

/*******************************************
 * Prompts the user for required inputs.
 *******************************************/
void Product::prompt()
{
   string name;
   string description;
   float price = -1;
   float weight;
   bool checkPrice = true;
   
   cout << "Enter name: ";
   getline(cin, name);
   cout << "Enter description: ";
   getline(cin, description);
   cout << "Enter weight: ";
   cin >> weight;

   while(price < 0)
   {
      cout << "Enter price: ";
      cin >> price;
      if (cin.fail())
      {
         cin.clear();
         cin.ignore(100, '\n');
         price = -1;
      }
   }
   
   this->name = name;
   this->description = description;
   this->weight = weight;
   this->price = price;
}

/***************************************
 * Returns 6% of the price
 **************************************/
float Product::getSalesTax()
{
   float price;
   price = this->price;
   return (price * 0.06);
}

/*****************************************
 * returns $2 if weight is less than 5lbs
 * else returns 10% of the excess weight.
 ****************************************/
float Product::getShippingCost()
{
   float weight;
   weight = this->weight;
   if (weight < 5)
      return 2.00;
   else
      return (2.00 + (0.10*(weight-5)));
}

/***************************************
 * Returns the total price.
 **************************************/
float Product::getTotalPrice(float salesTax, float shippingCost)
{
   float price;
   price = this->price;
   float totalPrice = price + salesTax + shippingCost;
   return totalPrice;
}

/**********************************************************
 * the funtion displays the profile of user entered person
 *********************************************************/
void Product::displayProfile()
{
   cout << this->name << " - $" << this->price << endl
        << "(" << this->description << ")" << endl;
}

/**********************************************************
 * the funtion displays the Inventory of the person.
 *********************************************************/
void Product::displayInventory()
{
   cout << "$" << this->price << " - " << this->name << " - "
        << this->weight << " lbs" << endl;
}

/**********************************************************
 * the funtion displays the receipt.
 *********************************************************/
void Product::displayReceipt(float salesTax, float shippingCost, float totalPrice)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   cout << this-> name << endl;
   cout << "  Price:         $" << setw(8) << this->price << endl;
   cout << "  Sales tax:     $" << setw(8) << salesTax << endl;
   cout << "  Shipping cost: $" << setw(8) << shippingCost << endl;
   cout << "  Total:         $" << setw(8) << totalPrice << endl;
}
