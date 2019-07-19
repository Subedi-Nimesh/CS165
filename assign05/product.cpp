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

/*****************************************
 * Default Constructor.
 ****************************************/
Product::Product()
{
   name = "none";
   description = "";
   price = 0;
   weight = 0;
}

/*****************************************
 * Non-Default Constructor.
 ****************************************/
Product::Product(string name, string description,
                 float price, float weight)
{
   this->name = name;
   this->description = description;
   this->price = price;
   this->weight = weight;
}

/*******************************************
 * Prompts the user for required inputs.
 *******************************************/
void Product::prompt()
{
   string name;
   string description;
   float price = -1;
   float weight;
   
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

/*****************************************
 * returns Name of the customer
 ****************************************/
string Product::getName()
{
   return this->name;
}

/********************************************
 * Sets the name with the user entered name.
 *******************************************/
void Product::setName(string name)
{
   this->name = name;
}

/***************************************
 * Returns the description of the product.
 **************************************/
string Product::getDescription()
{
   return this->description;
}

/*****************************************
 * Changes the description to the user
 * entered description.
 ****************************************/
void Product::setDescription(string description)
{
   this->description = description;
}

/***************************************
 * Returns the Base price of the product.
 **************************************/
float Product::getBasePrice()
{
   return this->price;
}

/*****************************************
 * returns the base price of the products.
 ****************************************/
void Product::setBasePrice(float price)
{
   this->price = price;
}
/***************************************
 * Returns the weight of the product.
 **************************************/
float Product::getWeight()
{
   return this->weight;
}

/*****************************************
 * Changes the weight of the product.
 ****************************************/
void Product::setWeight(float weight)
{
   this->weight = weight;
}

/***************************************
 * Returns the Sales tax of the product.
 **************************************/
float Product::getSalesTax()
{
   float price;
   price = this->price;
   return (price * 0.06);
}

/*****************************************
 * Returns the Shipping cost of the product.
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
 * Returns the total price of the product.
 **************************************/
float Product::getTotalPrice()
{
   float salesTax = getSalesTax();
   float shippingCost = getShippingCost();
   float price;
   price = this->price;
   float totalPrice = price + salesTax + shippingCost;
   return totalPrice;
}

/******************************************
 * the funtion displays the Advertisement 
 * of user entered product.
 *****************************************/
void Product::displayAdvertising()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << this->name << " - $" << this->price << endl
        << "(" << this->description << ")" << endl;
}

/**********************************************************
 * the funtion displays the Inventory of the person.
 *********************************************************/
void Product::displayInventory()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "$" << this->price << " - " << this->name;
   cout.precision(1); 
   cout << " - " << this->weight << " lbs" << endl;
}

/**********************************************************
 * the funtion displays the receipt.
 *********************************************************/
void Product::displayReceipt()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   cout << this-> name << endl;
   cout << "  Price:         $" << setw(8) << this->price << endl;
   cout << "  Sales tax:     $" << setw(8) << getSalesTax() << endl;
   cout << "  Shipping cost: $" << setw(8) << getShippingCost() << endl;
   cout << "  Total:         $" << setw(8) << getTotalPrice() << endl;
}
