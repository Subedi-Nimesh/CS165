/***********************************************************************
 * Header File:
 *    Flying object : The representation of a Flying objecton the screen.
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about Flying object Class.
 ************************************************************************/


#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include "point.h"
#include "velocity.h"

#include <iostream>

/*********************************************
 * Flying object Class
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
	void kill();
	virtual void advance();
	virtual void draw() = 0;
};
#endif