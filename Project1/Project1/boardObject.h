#ifndef boardObject_h
#define boardObject_h
#include <string>
using namespace std;


class boardObject
{
public:
	int q,xloc,yloc;
	int xsize,ysize;
	boardObject();
	boardObject(int xl, int yl, int xs, int ys);
	boardObject(int xl, int yl, int xs, int ys, int qin);
	~boardObject();
	virtual string toString(void) const;
};

#endif
