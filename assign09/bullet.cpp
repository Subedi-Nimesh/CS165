/***********************************************************************
 * Source File:
 *    Bullet : The representation of a Bullet on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about Bullet on the screen.
 ************************************************************************/

#include "point.h"
#include "bullet.h"
#include "uiDraw.h"
#include <cmath>
#include <cassert>
#define BULLET_SPEED 10.0

/*********************************************
 * Default Cnstructor of Bullet.
 *********************************************/
Bullet::Bullet()
{
	point.setX(200);
	point.setY(-200);
	angle = 60.0;
	alive = true;
}

/*********************************************
 * Fires the bullet in a perticular velocity.
 *********************************************/
void Bullet::fire(Point point, float angle)
{
	float dx = BULLET_SPEED * (cos(M_PI / 180.0 * angle));
	float dy = BULLET_SPEED * (-sin(M_PI / 180.0 * angle));
	velocity.setDx(velocity.getDx() - dx);
	velocity.setDy(velocity.getDy() - dy);
}

/*********************************************
 * Draws the bullet on the screen.
 *********************************************/
void Bullet::draw()
{
	drawDot(point);
}

/*********************************************
 * Advances the bullet.
 *********************************************/
void Bullet::advance()
{
	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());
}