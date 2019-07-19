/***********************************************************************
 * Header File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/


#ifndef VELOCITY_H
#define VELOCITY_H

#include <iostream>

/*********************************************
 * POINT
 * A single position.  
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
