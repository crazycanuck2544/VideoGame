#ifndef board_h
#define board_h
class board
{
public:
	board();
	~board();
	void print(char barray[11][10]);
private:
	int i;
	int j;
	char barray[11][10];

};

#endif