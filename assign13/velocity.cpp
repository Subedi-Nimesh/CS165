/***********************************************************************
 * Source File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/

#include "velocity.h"

#include <cassert>

/******************************************
 * POINT : CONSTRUCTOR WITH X,Y
 * Initialize the point to the passed position
 *****************************************/
float Velocity::getDx()
{
	return this->dx;
}

float Velocity::getDy()
{
	return this->dy;
}

void Velocity::setDx(float dx)
{
	this->dx = dx;
}

void Velocity::setDy(float dy)
{
   this->dy = dy;
}