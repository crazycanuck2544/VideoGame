#ifndef controller_h
#define controller_h
/*
#include "treeObject.h"
#include "houseObject.h"
#include "boardObject.h"
*/
#include "board.h"

class controller
{
public:
	controller();
	~controller();
	void print(boardObject* barray[11][8]);
private:
	
	board board1;
};

#endif