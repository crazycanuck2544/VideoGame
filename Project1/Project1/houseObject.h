#ifndef houseObject_h
#define houseObject_h
#include "boardObject.h"

class houseObject : public boardObject
{
public:
	houseObject(void);
	~houseObject(void);
	houseObject(int xl, int yl, int xs, int ys);
	virtual string toString(void) const;
};

#endif