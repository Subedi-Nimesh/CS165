// File: order.cpp

#include "order.h"
#include <iostream>

using namespace std;

// Put your the method bodies for your order class here

/******************************************
 * Default Constructor
 ****************************************/
Order::Order()
{
   this->quantity = 0;
}

/***********************************************
 * Non-Default Constructor
 ****************************************/
Order::Order(Product product, int quantity, Customer customer)
{
   this->product = product;
   this->quantity = quantity;
   this->customer = customer;
}

/*****************************************
 * returns the product from the class.
 ****************************************/
Product Order::getProduct()
{
   return this->product;
}

/***********************************************
 * Sets the Product entered by the user.
 ****************************************/
void Order::setProduct(Product product)
{
   this->product = product;
}

/***************************************
 * Returns the number of quantity.
 **************************************/
int Order::getQuantity()
{
   return this->quantity;
}

/*****************************************
 * Sets the Quantity entered by the user.
 ****************************************/
void Order::setQuantity(int quantity)
{
   this->quantity = quantity;
}

/***************************************
 * Returns the details of the customer.
 **************************************/
Customer Order::getCustomer()
{
   return this->customer;
}

/*****************************************
 * Changes the details of the customer
 * entered by the user.
 ****************************************/
void Order::setCustomer(Customer customer)
{
   this->customer = customer;
}

/**********************************************
 * Returns the shipping adress of the product.
 *********************************************/
string Order::getShippingZip()
{
	string zip = customer.getAddress().getZip();
 	return zip;
}

/*****************************************
 * Returns the total price of the product.
 ****************************************/
float Order::getTotalPrice()
{
	return product.getTotalPrice() * getQuantity();
}

/*********************************************
 * Displays the shipping lable of the product.
 ********************************************/
void Order::displayShippingLabel()
{
   customer.display();
}

/*****************************************
 * Displays the information of the product 
 * and the customers.
 ****************************************/
void Order::displayInformation()
{
   cout << customer.getName() << endl;
   cout << product.getName() << endl;
   cout << "Total Price: $" << product.getTotalPrice() * getQuantity() << endl;
}
