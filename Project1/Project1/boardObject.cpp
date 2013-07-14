#include "boardObject.h"
#include <iostream>
#include <stdlib.h>


boardObject::boardObject()
{
	int q=0;
}


boardObject::~boardObject()
{
}

std::string boardObject::toString(void) const
{
	if(this->q == 0)
		return "Terrain";
	else if(this->q == 1)
		return "Unit";
	else if (this->q == 2)
		return "Building";
	else
		return "Empty";
}