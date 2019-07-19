/***********************************************************************
 * Source File:
 *    Bird : The representation of a Bird on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Every method required for a bird class is in this file.
 ************************************************************************/

#include "point.h"
#include "bird.h"
#include "uiDraw.h"
#include "cstdlib"
#include <cassert>

/***************************************************
* Default constructor of Bird.
***************************************************/
Bird::Bird()
{
	point.setX(-200);
	point.setY(random(-200, 200));
	hits = 1;
	alive = true;
	velocity.setDx(random(3, 6));
	if (point.getY() > 0)
		velocity.setDy(velocity.getDy() + random(-4, 0));
	else if (point.getY() < 0)
		velocity.setDy(velocity.getDy() + random(1, 4));
	else
		velocity.setDy(velocity.getDy() + random(-4, 4));
}

/***************************************************
* Draws the Standard Bird on the screen.
***************************************************/
void StandardBird::draw()
{
	drawCircle(point, 15.00);
}

/***************************************************
* Draws the Tough Bird on the screen.
***************************************************/
void ToughBird::draw()
{
	drawToughBird(point, 15.00, hits);
}

/***************************************************
* Draws the Scared Bird on the screen.
***************************************************/
void SacredBird::draw()
{
	drawSacredBird(point, 15.00);
}

/***************************************************
* Kills the Standard birds and gains 1 points.
***************************************************/
int Bird::hit()
{
	alive = false;
	return 1;
}

/***************************************************
* Kills the Tough birds in 3 hits and gains 5 points.
***************************************************/
int ToughBird::hit()
{
	if (hits <= 1)
	{
		alive = false;
		return 3;
	}
	else
	{
		hits -= 1;
		return 1;
	}
}

/***************************************************
* Kills the Sacred birds and reduces 10 points.
***************************************************/
int SacredBird::hit()
{
	alive = false;
	return -10;
}

/***************************************************
* Default constructor for Tough Bird.
***************************************************/
ToughBird::ToughBird()
{
	hits = 3;
	velocity.setDx(random(2, 4));
	if(point.getY() >= 0)
		velocity.setDy(random(-3, 0));
	else
		velocity.setDy(random(0, 3));
}