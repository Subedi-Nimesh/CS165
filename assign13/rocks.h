#ifndef rocks_h
#define rocks_h

#define BIG_ROCK_SIZE 16
#define MEDIUM_ROCK_SIZE 8
#define SMALL_ROCK_SIZE 4

#define BIG_ROCK_SPIN 2
#define MEDIUM_ROCK_SPIN 5
#define SMALL_ROCK_SPIN 10



// Define the following classes here:
//   Rock
//   BigRock
//   MediumRock
//   SmallRock
#include "flyingObject.h"
#include <iostream>

class Rocks: public FlyingObject
{
protected: 
	int hits;

public:
	Rocks();
	virtual int hit() { };
	virtual void draw() { };
};

class BigRock: public Rocks
{
public:
	BigRock();
	void draw();
};

class MediumRock: public Rocks
{
public:
	MediumRock();
	void draw();
};

class SmallRock: public Rocks
{
public:
	void draw();
};
#endif /* rocks_h */
