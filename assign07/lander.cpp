/***********************************************************************
 * Source File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/

#include "lander.h"
#include "uiDraw.h"

#include <cassert>

Lander::Lander()
{
	alive = true;
	landed = false;
	fuel = 500;
	gravity = -0.1;
	point.setX(150);
	point.setY(100);
}

Point Lander::getPoint() const
{
	return point;
}

Velocity Lander::getVelocity() const
{
	return velocity;
}
   
bool Lander::isAlive()
{
	return this->alive;
}
 
bool Lander::isLanded()
{
	return this->landed;
}

int Lander::getFuel()
{
	return this->fuel;
}

bool Lander::canThrust()
{
	if (fuel > 0 && alive == true)
		return true;
	else
		return false;
}

void Lander::setAlive(bool alive)
{
	this->alive = alive;
}

void Lander::setLanded(bool landed)
{
	this->landed = landed;
}

void Lander::setFuel(int fuel)
{
	this->fuel = fuel;
	if (fuel < 0)
		this->fuel = 0;
}

void Lander::applyGravity(float gravity)
{
	velocity.setDy(velocity.getDy() - gravity);
}

void Lander::applyThrustLeft()
{
	if (canThrust() == true)
	{
		velocity.setDx(velocity.getDx() + 0.1);
		setFuel(fuel - 1);
	}
}

void Lander::applyThrustRight()
{
	if (canThrust() == true)
	{
		velocity.setDx(velocity.getDx() - 0.1);
		setFuel(fuel - 1);
	}
}

void Lander::applyThrustBottom()
{
	if (canThrust() == true)
	{
		velocity.setDy(velocity.getDy() + 0.3);
		setFuel(fuel - 3);
	}
}

void Lander::advance()
{
	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());
}

void Lander::draw()
{
	drawLander(point);

	moon.setX(150);
    moon.setY(150);
    drawCircle(moon, 20);

   for (int i = 0; i < 10; i++)
   {
      stars.setX((float)random(-200,200));
      stars.setY((float)random(-200,200));
      drawDot(stars);
   }
	
}