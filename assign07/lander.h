/***********************************************************************
 * Header File:
 *    Lander : The representation of the lander on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about the lander on the screen.
 ************************************************************************/


#ifndef LANDER_H
#define LANDER_H

#include "velocity.h"
#include "point.h"


#include <iostream>

/*********************************************
 * POINT
 * A single position.  
 *********************************************/
class Lander
{
private:
	Point point;
	Point stars;
	Point moon;
	Velocity velocity;
	bool alive;
	bool landed;
	int fuel;
	float gravity;


public:
	Lander();
	
	Point getPoint() const;
	Velocity getVelocity() const;
	bool isAlive();
	bool isLanded();
	int getFuel();
	bool canThrust();

	void setAlive(bool alive);
	void setLanded(bool landed);
	void setFuel(int fuel);

	void applyGravity(float gravity);
	void applyThrustLeft();
	void applyThrustRight();
	void applyThrustBottom();

	void advance();
	void draw();
};

#endif