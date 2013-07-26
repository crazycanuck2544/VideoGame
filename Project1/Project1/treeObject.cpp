#include "treeObject.h"
#include <iostream>
#include <stdlib.h>


treeObject::treeObject(void)
{
}

treeObject::treeObject(int x, int y)
{
	xloc = x;
	yloc = y;
}

treeObject::~treeObject(void)
{
}

std::string treeObject::toString(void) const
{
	//cout<<"found a tree! ";
	return boardObject::toString();// + "-tree" ;
}

