/***********************************************************************
 * Header File:
 *    Bullet : The representation of a Bullet on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about Bullet class
 ************************************************************************/


#ifndef BULLET_H
#define BULLET_H

#include "flyingObject.h"
#include "point.h"
#include "velocity.h"
#include <iostream>

/*********************************************
 * Bullet class.
 *********************************************/
class Bullet: public FlyingObject
{
private:
	float angle;
public:
	Bullet();
	void fire(Point point, float angle);
	void draw();
	void advance();

};
#endif