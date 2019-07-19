/***********************************************************************
 * Header File:
 *    Ship : The representation of the Ship on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about the Ship on the screen.
 ************************************************************************/


#ifndef SHIP_H
#define SHIP_H

#include "flyingObject.h"
#include "velocity.h"
#include "point.h"


#include <iostream>

/*********************************************
 * POINT
 * A single position.  
 *********************************************/
class Ship: public FlyingObject
{
private:
	Point point;
	Velocity velocity;
	float angle;
	bool alive;
	float gravity;


public:
	Ship();
	
	Point getPoint() const;
	float getAngle() const;
	void setAngle(float angle);
	Velocity getVelocity() const;
	
	bool isAlive();
	void setAlive(bool alive);

	void applyGravity(float gravity);
	void applyThrustLeft();
	void applyThrustRight();
	void applyThrustBottom();

	void advance();
	void draw();
};

#endif