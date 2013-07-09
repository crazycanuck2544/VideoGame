#include "board.h"
#include <iostream>
#include <string>
using namespace std;

board::board()
{
	int i;
	int j;
	char barray[11][10];
}
board::~board()
{
	cout<<"destructor"<<endl;
}
void board::print(char barray[11][10])
{
	for(i = 0; i<11; i++)
	{
		for(j = 0; j<10; j++)
		{
			cout<<barray[i][j];
		}
		cout<<"\n";
		cout<<endl;
	}
}
int main()
{
	board board1;
	char barray[11][10];
	board1.print(barray);
	std::cin.get();
	return 0;
}