#include "houseObject.h"
#include <iostream>
#include <stdlib.h>


houseObject::houseObject(void)
{
}


houseObject::~houseObject(void)
{
}

std::string houseObject::toString(void) const
{
	//cout<<"found a house! ";
	return boardObject::toString() + "-house" ;
}