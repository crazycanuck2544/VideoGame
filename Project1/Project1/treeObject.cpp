#include "treeObject.h"
#include <iostream>
#include <stdlib.h>


treeObject::treeObject(void)
{
}


treeObject::~treeObject(void)
{
}

std::string treeObject::toString(void) const
{
	//cout<<"found a tree! ";
	return boardObject::toString() + "-tree" ;
}

