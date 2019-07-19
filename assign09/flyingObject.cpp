/***********************************************************************
 * Source File:
 *    Flying Object : The representation of a Flying Object on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about a Flying Object.
 ************************************************************************/

#include "flyingObject.h"
#include <cassert>

/*********************************************
 * Default Constructor of Flying Object.
 *********************************************/
FlyingObject::FlyingObject()
{
	alive = true;
}

/*********************************************
 * Returns Point.
 *********************************************/
Point FlyingObject::getPoint()
{
	return point;
}

/*********************************************
 * Returns Velocity.
 *********************************************/
Velocity FlyingObject::getVelocity()
{
	return velocity;
}

/*********************************************
 * Returns to check whether alive.
 *********************************************/
bool FlyingObject::isAlive()
{
	return alive;
}

/*********************************************
 * Changes the point.
 *********************************************/
void FlyingObject::setPoint(Point point)
{
	this->point = point;
}

/*********************************************
 * Changes to a new point.
 *********************************************/
void FlyingObject::setVelocity(Velocity velocity)
{
	this->velocity = velocity;
}

/*********************************************
 * Deletes the flying object from the screen.
 *********************************************/
void FlyingObject::kill()
{
	alive = false;
}

/*********************************************
 * Advances the flying object forward.
 *********************************************/
void FlyingObject::advance()
{
	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());
}