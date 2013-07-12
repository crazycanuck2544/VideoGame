#include "boardObject.h"
#include <iostream>
#include <stdlib.h>


boardObject::boardObject(void)
{
	int q;
}


boardObject::~boardObject(void)
{
}

std::string boardObject::toString(void) const
{
	if(this->q == 1)
		return "Terrain";
	else if(this->q == 2)
		return "Unit";
	else if (this->q == 3)
		return "Building";
	else
		return "Empty";
}