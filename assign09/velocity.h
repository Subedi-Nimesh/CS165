/***********************************************************************
 * Header File:
 *    Velocity : The representation of a Velocity on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about Velocity Class.
 ************************************************************************/


#ifndef VELOCITY_H
#define VELOCITY_H

#include <iostream>

/*********************************************
 * Velocity Class.
 *********************************************/
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

#endif // POINT_H
