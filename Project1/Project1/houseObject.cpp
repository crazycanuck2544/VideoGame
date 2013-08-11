#include "houseObject.h"
#include <iostream>
#include <stdlib.h>


houseObject::houseObject(void)
{
}

houseObject::houseObject(int xl, int yl, int xs, int ys)
{
	xloc = xl;
	yloc = yl;
	xsize = xs;
	ysize = ys;
}

houseObject::~houseObject(void)
{
}

std::string houseObject::toString(void) const
{
	//cout<<"found a house! ";
	return boardObject::toString();// + "-house" ;
}