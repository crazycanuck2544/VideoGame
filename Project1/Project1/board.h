#ifndef board_h
#define board_h
#include "boardObject.h"

class board
{
public:
	board();
	~board();
	void print(boardObject barray[11][10]);
private:
	int i;
	int j;
	boardObject barray[11][10];

};

#endif