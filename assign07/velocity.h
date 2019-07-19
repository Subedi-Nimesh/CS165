/***********************************************************************
 * Header File:
 *    Velocity : The representation of a velocity of the lander.
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about the velocity of the lander.
 ************************************************************************/


#ifndef VELOCITY_H
#define VELOCITY_H

#include <iostream>

class Velocity
{
private:
   float dy;
   float dx;

public:
   Velocity()
   {
   	this->dy = 0.0;
   	this->dx = 0.0;
   }
   
   Velocity(float dx, float dy)
   {
   	this->dy = dy;
   	this->dx = dx;
   }

   float getDx();
   float getDy();
   void setDx(float dx);
   void setDy(float dy);

};

#endif
