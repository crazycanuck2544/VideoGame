#ifndef treeObject_h
#define treeObject_h
#include "boardObject.h"

class treeObject : public boardObject
{
public:
	treeObject(void);
	treeObject(int xl, int yl, int xs, int ys);
	~treeObject(void);
	virtual string toString(void) const;
};

#endif