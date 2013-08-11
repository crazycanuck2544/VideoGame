#include "treeObject.h"
#include <iostream>
#include <stdlib.h>


treeObject::treeObject(void)
{
}

treeObject::treeObject(int xl, int yl, int xs, int ys)
{
	xloc = xl;
	yloc = yl;
	xsize = xs;
	ysize = ys;
}


treeObject::~treeObject(void)
{
}

std::string treeObject::toString(void) const
{
	//cout<<"found a tree! ";
	return boardObject::toString();// + "-tree" ;
}

