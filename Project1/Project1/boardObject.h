#ifndef boardObject_h
#define boardObject_h
#include <string>
using namespace std;


class boardObject
{
public:
	int q,xloc,yloc;
	boardObject();
	boardObject(int x, int y);
	~boardObject();
	virtual string toString(void) const;
};

#endif
