#ifndef board_h
#define board_h
#include "treeObject.h"
#include "houseObject.h"
#include "boardObject.h"
#include "unitObject.h"


class board
{
public:
	board();
	~board();
	void print(boardObject* barray[30][30]);
	void init();
	void get(boardObject* out[30][30]);
	unitObject* findUnitInit();
	void update(void);
	int getNumUnits(void);
	void setDest(int n,int x, int y);
private:
	int i;
	int j;
	boardObject* barray[30][30];
	unitObject* unitList[500];
	int numUnits;
};

#endif