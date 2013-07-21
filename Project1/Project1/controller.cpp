#include "controller.h"
#include <iostream>
#include <string>
using namespace std;

controller::controller()
{
	
	
}
controller::~controller()
{
	//cout<<"controller-destructor"<<endl;
}
void controller::print(boardObject* printArray[11][8])
{
	cout << "------------Controller Print-----------\n\n";
	cout << "     \t0\t1\t2\t3\t4\t5\t6\t7\n";
	cout <<	"     ---------------------------------------------------------------\n";
	for(int i = 0; i<11; i++)
	{
		
		if (i < 10)
			cout << " ";
		cout << i; 
		cout << "|\t";

		for(int j = 0; j<8; j++)
		{
			cout<<printArray[i][j]->toString() + "\t";
			
		}
		cout<<"\n  | ";
		cout<<"\n  | ";
		cout<<endl;
	}
}
int main()
{
	
	
	controller c;
	cout << "------------Controller Main------------\n";
	string y = "x";
	board board1;
	board1.init();
	
	while (y != "q")
	{
		//board1.update();
		boardObject* printArray[11][8];
		board1.get(printArray);
		c.print(printArray);
		
		cout << "Type 'q' to quit: ";
		cin >> y; 
		system("cls");
	}
	
	
	std::cin.get();
	return 0;
}