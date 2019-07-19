/***********************************************************************
 * Source File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/

#include "ship.h"
#include "uiDraw.h"

#include <cassert>

Ship::Ship()
{
	alive = true;
	angle = 20;
	gravity = 0.5;
	point.setX(0);
	point.setY(0);
}

Point Ship::getPoint() const
{
	return point;
}

float Ship::getAngle() const
{
	return angle;
}

void Ship::setAngle(float angle)
{
	this->angle = angle;
}

Velocity Ship::getVelocity() const
{
	return velocity;
}
   
bool Ship::isAlive()
{
	return this->alive;
}

void Ship::setAlive(bool alive)
{
	this->alive = alive;
}

void Ship::applyGravity(float gravity)
{
	velocity.setDy(velocity.getDy() + gravity);
}

void Ship::applyThrustLeft()
{
	setAngle(angle += 6);
}

void Ship::applyThrustRight()
{
	setAngle(angle -= 6);
}

void Ship::applyThrustBottom()
{
	velocity.setDx(0.5 * (sin(M_PI / 180.0 * getAngle() - 180)));
	velocity.setDy(0.5 * (-cos(M_PI / 180.0 * getAngle() - 180)));
}

void Ship::advance()
{
	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());
}

void Ship::draw()
{
	drawShip(point, angle);
}