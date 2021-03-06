#include "unitObject.h"
#include <iostream>
#include <stdlib.h>


unitObject::unitObject(void)
{
	this->q = 777;
}

unitObject::unitObject(int xl, int yl, int xs, int ys)
{
	id = 0;
	this->q = 777;
	xloc = xl;
	yloc = yl;
	xsize = xs;
	ysize = ys;
	moving = false;
}

unitObject::unitObject(int xl, int yl, int xs, int ys, int i)
{
	id = i;
	this->q = 777;
	xloc = xl;
	yloc = yl;
	xsize = xs;
	ysize = ys;
	moving = false;
}

unitObject::~unitObject(void)
{
}

std::string unitObject::toString(void) const
{
	return std::to_string(id);
	//return boardObject::toString();
}

bool unitObject::isMoving(void)
{
	return moving;
}

void unitObject::setDest(int x, int y)
{
	xdest = x;
	ydest = y;
	moving = true;
}

void unitObject::stopMoving()
{
	moving = false;
}