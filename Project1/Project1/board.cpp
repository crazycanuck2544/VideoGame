#include "board.h"
#include <iostream>
#include <string>
using namespace std;

board::board()
{
	int i;
	int j;
	//boardObject barray[11][10];
	boardObject* barray[11][10];
}
board::~board()
{
	cout<<"destructor"<<endl;
}
void board::print(boardObject* barray[11][10])
{
	cout << "     \t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\n";
	cout <<	"     --------------------------------------------------------------------\n";
	for(i = 0; i<11; i++)
	{
		
		if (i < 10)
			cout << " ";
		cout << i; 
		cout << "|\t";

		for(j = 0; j<10; j++)
		{
			/*
			if (dynamic_cast<>(barray[i][j]))
				cout<<"TREE";
			*/
			cout<<barray[i][j]->toString() + "\t";
			
			
			//boardObject & b = barray[i][j];
			//cout << b.toString() + " ";
			
		}
		cout<<"\n  | ";
		cout<<endl;
	}
}
int main()
{
	board board1;
	boardObject* barray[11][10];
	for(int i =0; i<11; i++)
	{
		for(int j = 0; j<10; j++)
		{
			int x = rand() % 4;
			boardObject* b = new boardObject();
			b->q = x;
			//barray[i][j]->q = 0;
			if(x == 0){
				cout << "\ncreating a tree at (";
				cout << i;
				cout << ")(";
				cout << j;
				cout << ")\n";
				
				b= new treeObject();
				b->q = 0;
				cout << b->toString();
				//barray[i][j] = t;
			}
			if(x == 2){
				cout << "\ncreating a house at (";
				cout << i;
				cout << ")(";
				cout << j;
				cout << ")\n";
				
				b= new houseObject();
				b->q = 2;
				cout << b->toString();
				//barray[i][j] = t;
			}
			barray[i][j] = b;
		}
	}
	cout << "\n";
	

	board1.print(barray);
	std::cin.get();
	return 0;
}