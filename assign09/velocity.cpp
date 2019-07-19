/***********************************************************************
 * Source File:
 *    Velocity : The representation of a Velocity on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about Velocity Class.
 ************************************************************************/

#include "velocity.h"

#include <cassert>

/******************************************
 * Returns the value of Dx.
 *****************************************/
float Velocity::getDx()
{
	return this->dx;
}

/******************************************
 * Returns the value of Dy.
 *****************************************/
float Velocity::getDy()
{
	return this->dy;
}

/******************************************
 * Changes the value of Dx.
 *****************************************/
void Velocity::setDx(float dx)
{
	this->dx = dx;
}

/******************************************
 * Changes the value of Dy.
 *****************************************/
void Velocity::setDy(float dy)
{
   this->dy = dy;
}