#ifndef boardObject_h
#define boardObject_h
#include <string>
using namespace std;


class boardObject
{
public:
	int q;
	boardObject(void);
	~boardObject(void);
	virtual string toString(void) const;
};

#endif
