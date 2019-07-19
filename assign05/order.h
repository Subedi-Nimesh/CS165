// File: order.h

#ifndef ORDER_H
#define ORDER_H

#include "product.h"
#include "customer.h"


// Put your Order class here

class Order
{
  private:
   Product product;
   int quantity;
   Customer customer;
   
  public:
   Order();
   Order(Product product, int quantity, Customer customer);
   
   Product getProduct();
   void setProduct(Product product);
   int getQuantity();
   void setQuantity(int quantity);
   Customer getCustomer();
   void setCustomer(Customer customer);
   string getShippingZip();
   float getTotalPrice();
   void displayShippingLabel();
   void displayInformation();
};


#endif
