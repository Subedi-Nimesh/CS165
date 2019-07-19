/***********************************************************************
 * Header File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/


#ifndef BULLET_H
#define BULLET_H

#include "flyingObject.h"
#include "point.h"
#include "velocity.h"
#include <iostream>

/*********************************************
 * POINT
 * A single position.  
 *********************************************/
class Bullet: public FlyingObject
{
public:
	Bullet();
	void fire(Point point);
	void draw();
	void advance();
private:
	int rotate;
};
#endif