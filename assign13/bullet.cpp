/***********************************************************************
 * Source File:
 *    Point : The representation of a position on the screen
 * Author:
 *    Br. Helfrich
 * Summary:
 *    Everything we need to know about a location on the screen, including
 *    the location and the bounds.
 ************************************************************************/

#include "point.h"
#include "bullet.h"
#include "uiDraw.h"
#include <cmath>
#include <cassert>
#define BULLET_SPEED 5.0

Bullet::Bullet()
{
	alive = true;
}

void Bullet::fire(Point point)
{
	float dx = velocity.getDx() + (BULLET_SPEED * (cos(M_PI / 180.0 * (rotate))));
	float dy = velocity.getDy() + (BULLET_SPEED * (-sin(M_PI / 180.0 * (rotate))));
	velocity.setDx(dx);
	velocity.setDy(dy);
}

void Bullet::draw()
{
	drawDot(point);
}

void Bullet::advance()
{
	point.setX(point.getX() + velocity.getDx());
	point.setY(point.getY() + velocity.getDy());
}