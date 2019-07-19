/***********************************************************************
 * Source File:
 *    Velocity : The representation of a velocity of the lander.
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about the velocity of the lander.
 ************************************************************************/

#include "velocity.h"

#include <cassert>

/******************************************
 * 
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