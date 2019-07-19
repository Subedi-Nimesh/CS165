/***********************************************************************
 * Header File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/


#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "velocity.h"

#include <iostream>

/*********************************************
 * POINT
 * A single position.  
 *********************************************/
class FlyingObject
{
protected:
	Point point;
	Velocity velocity;
	bool alive;

public:
	FlyingObject();
	
	Point getPoint();
	Velocity getVelocity();
	bool isAlive();
	
	void setPoint(Point point);
	void setVelocity(Velocity velocity);
	void setAlive();
	void kill();
	
	virtual void advance();
	virtual void draw() = 0;
	void hit();
};
#endif