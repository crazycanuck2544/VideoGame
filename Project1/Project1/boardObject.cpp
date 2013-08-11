#include "boardObject.h"
#include <iostream>
#include <stdlib.h>


boardObject::boardObject()
{
}
boardObject::boardObject(int xl, int yl, int xs, int ys)
{
	xloc = xl;
	yloc = yl;
	xsize = xs;
	ysize = ys;
}

boardObject::boardObject(int xl, int yl, int xs, int ys, int qin)
{
	xloc = xl;
	yloc = yl;
	xsize = xs;
	ysize = ys;
	q = qin;
} 
boardObject::~boardObject()
{
}

std::string boardObject::toString(void) const
{
	if(this->q == 0)
		return "T";
	else if(this->q == 1)
		return "U";
	else if (this->q == 2)
		return "B";
	else if (this->q == 777)
		return "*";
	else if (this->q == 888) //occupied
		return "X";
	else
		return "_";
}