#include "rocks.h"

// Put your Rock methods here
#include "point.h"
#include "uiDraw.h"
#include "cstdlib"
#include <cassert>

Rocks::Rocks()
{
	point.setX(random(-200, 200));
	point.setY(random(-200, 200));
	alive = true;
	velocity.setDx(3);
	velocity.setDy(3);
}

void BigRock::draw()
{
	drawLargeAsteroid(point, 2);
}

void MediumRock::draw()
{
	drawMediumAsteroid(point, 5);
}

void SmallRock::draw()
{
	drawSmallAsteroid(point, 10);
}

BigRock::BigRock()
{
	velocity.setDx(random(1, 3));
	velocity.setDx(random(1, 3));
}