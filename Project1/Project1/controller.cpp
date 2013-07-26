#include "controller.h"
#include <windows.h>
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
void controller::print(boardObject* printArray[30][30])
{
	cout << "------------Controller Print-----------\n\n";
	for(int i = 0; i<30; i++)
	{
		for(int j = 0; j<30; j++)
		{
			cout<<printArray[i][j]->toString() + " ";
			
		}
		cout<<"\n";
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
	int xloc =0, yloc =0;
	
	//unitObject* u = board1.findUnitInit();
	while (y != "q")
	{
		board1.update();
		boardObject* printArray[30][30];
		board1.get(printArray);
		c.print(printArray);
		
		//if(!u->isMoving()){
			cout << "Type 'q' to quit, 'm' to move, 'i' to reinitiallize: ";
			cin >> y; 
			if(y == "i")
			{
				board1.init();
			}
			if(y == "m")
			{
				int n;
				cout << "Input which unit to move:";
				cin >> n; 
				while(n>board1.getNumUnits())
				{
					cout<< "Unit not found, try again:";
					cin >> n; 
				}
				cout << "Input x location to move to:";
				cin >> xloc;
				cout << "Input y location to move to:";
				cin >> yloc;
				board1.setDest(n,xloc,yloc);
			}
/*		}
		else{
			Sleep(1000);
		}*/
		system("cls");
	}
	
	
	std::cin.get();
	return 0;
}