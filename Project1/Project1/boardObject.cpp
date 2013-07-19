#include "boardObject.h"
#include <iostream>
#include <stdlib.h>


boardObject::boardObject()
{
	int q=-1;
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
	else
		return "E";
}