/***********************************************************************
 * Header File:
 *    Bird : The representation of a Bird on the screen
 * Author:
 *    Nimesh Subedi
 * Summary:
 *    Everything we need to know about the Bird on the screen.
 ************************************************************************/


#ifndef BIRD_H
#define BIRD_H

#include "flyingObject.h"
#include <iostream>

/*********************************************
 * Class Bird.
 *********************************************/
class Bird: public FlyingObject
{
protected: 
	int hits;

public:
	Bird();
	virtual int hit();
	virtual void draw() = 0;
};

/*********************************************
 * Class Standard Bird.
 *********************************************/
class StandardBird: public Bird
{
public:
	void draw();
};

/*********************************************
 * Class Tough Bird.
 *********************************************/
class ToughBird: public Bird
{
public:
	ToughBird();
	void draw();
	int hit();
};

/*********************************************
 * Class Sacred Bird.
 *********************************************/
class SacredBird: public Bird
{
public:
	int hit();
	void draw();
};
#endif
