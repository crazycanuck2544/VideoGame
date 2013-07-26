#ifndef houseObject_h
#define houseObject_h
#include "boardObject.h"

class houseObject : public boardObject
{
public:
	houseObject(void);
	~houseObject(void);
	houseObject(int x, int y);
	virtual string toString(void) const;
};

#endif