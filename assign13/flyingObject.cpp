/***********************************************************************
 * Source File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/

#include "flyingObject.h"
#include <cassert>

FlyingObject::FlyingObject()
{
	alive = true;
}

Point FlyingObject::getPoint()
{
	return point;
}

Velocity FlyingObject::getVelocity()
{
	return velocity;
}

bool FlyingObject::isAlive()
{
	return alive;
}

void FlyingObject::setPoint(Point point)
{
	this->point = point;
}

void FlyingObject::setVelocity(Velocity velocity)
{
	this->velocity = velocity;
}

void FlyingObject::kill()
{
	alive = false;
}

void FlyingObject::advance()
{
	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());
}