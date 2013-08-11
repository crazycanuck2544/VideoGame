#ifndef unitObject_h
#define unitObject_h
#include "boardObject.h"

class unitObject : public boardObject
{
public:
	unitObject(void);
	unitObject(int xl, int yl, int xs, int ys);
	unitObject(int xl, int yl, int xs, int ys, int i);
	~unitObject(void);
	virtual string toString(void) const;
	bool isMoving(void);
	bool moving;
	void setDest(int x, int y);
	void stopMoving(void);
    int xdest, ydest, id;
};

#endif