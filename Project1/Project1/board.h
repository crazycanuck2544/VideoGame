#ifndef board_h
#define board_h
#include "treeObject.h"
#include "houseObject.h"
#include "boardObject.h"


class board
{
public:
	board();
	~board();
	void print(boardObject* barray[11][8]);
	void init();
	void get(boardObject* out[11][8]);
private:
	int i;
	int j;
	boardObject* barray[11][8];

};

#endif