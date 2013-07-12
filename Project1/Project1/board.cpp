#include "board.h"
#include <iostream>
#include <string>
using namespace std;

board::board()
{
	int i;
	int j;
	boardObject barray[11][10];
}
board::~board()
{
	cout<<"destructor"<<endl;
}
void board::print(boardObject barray[11][10])
{
	for(i = 0; i<11; i++)
	{
		for(j = 0; j<10; j++)
		{
			cout<<char(barray[i][j].q);
			//cout<<1;
		}
		cout<<"\n";
		cout<<endl;
	}
}
int main()
{
	board board1;
	boardObject barray[11][10];
	for(int i =0; i<11; i++)
	{
		for(int j = 0; j<11; j++)
		{
			barray[11][10].q = 1;
		}
	}

	board1.print(barray);
	std::cin.get();
	return 0;
}