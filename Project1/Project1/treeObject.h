#ifndef treeObject_h
#define treeObject_h
#include "boardObject.h"

class treeObject : public boardObject
{
public:
	treeObject(void);
	~treeObject(void);
	virtual string toString(void) const;
};

#endif