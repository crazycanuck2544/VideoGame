#include "board.h"
#include <iostream>
#include <string>
using namespace std;

board::board()
{
	int i;
	int j;
	numUnits = -1;
	//boardObject* barray[11][10];
}
board::~board()
{
	//cout<<"board-destructor"<<endl;
}
void board::init()
{
	numUnits = 0;
	for(int a =0; a<30; a++)
	{
		for(int j = 0; j<30; j++)
		{
			int x = rand() % 200;
			boardObject* temp = new boardObject();
			temp->q = x;
			
			if(x <20){
				temp= new treeObject();
				temp->q = 0;
			}
			
			if(x >20 && x <25){
				temp= new houseObject();
				temp->q = 2;
			}
			if(x == 25){
				
				unitList[numUnits] = new unitObject(a,j,numUnits);
				temp = unitList[numUnits];
				numUnits++;
			}
			barray[a][j] = temp;
			
		}
	}
	unitObject* u = new unitObject(0,0,numUnits);
	unitList[numUnits] = u;
	numUnits++;
	barray[0][0] = u;
	
	cout << "\n";
}
int board::getNumUnits(void)
{
	return numUnits;
}
void board::setDest(int n, int x, int y)
{
	unitList[n]->setDest(x,y);
}
void board::update(void)
{
	if(numUnits == -1)
		return;
	for(int a =0; a<numUnits; a++){
		if(unitList[a]->isMoving())
		{
			//simple movement for now
			/*
			cout<< "xloc: " ;
			cout<<unitList[a]->xloc;
			cout<< "\nyloc: " ;
			cout<<unitList[a]->yloc;
			cout<< "\n";
			*/
			barray[unitList[a]->xloc][unitList[a]->yloc] = new boardObject(unitList[a]->xloc,unitList[a]->yloc);
			if(unitList[a]->xloc > unitList[a]->xdest)
			{
				if(unitList[a]->yloc > unitList[a]->ydest)
				{
					unitList[a]->xloc --;
					unitList[a]->yloc --;	
				}
				else if(unitList[a]->yloc < unitList[a]->ydest)
				{
					unitList[a]->xloc --;
					unitList[a]->yloc ++;			
				}
				else
				{
					unitList[a]->xloc --;			
				}
			}
			else if(unitList[a]->xloc < unitList[a]->xdest)
			{
				if(unitList[a]->yloc > unitList[a]->ydest)
				{
					unitList[a]->xloc ++;
					unitList[a]->yloc --;	
				}
				else if(unitList[a]->yloc < unitList[a]->ydest)
				{
					unitList[a]->xloc ++;
					unitList[a]->yloc ++;				
				}
				else
				{
					unitList[a]->xloc ++;			
				}
			}
			else //xloc = xdest
			{
				if(unitList[a]->yloc > unitList[a]->ydest)
				{
					unitList[a]->yloc --;	
				}
				else if(unitList[a]->yloc < unitList[a]->ydest)
				{
					unitList[a]->yloc ++;
				}
				else
				{
					unitList[a]->stopMoving();
				}
			}

		}
		barray[unitList[a]->xloc][unitList[a]->yloc] = unitList[a];
		/*
			cout<< "new xloc: " ;
			cout<<unitList[a]->xloc;
			cout<< "\nnew yloc: " ;
			cout<<unitList[a]->yloc;
			cout<< "\n";
		*/
		if(unitList[a]->xloc == unitList[a]->xdest && unitList[a]->yloc == unitList[a]->ydest)
		{
			unitList[a]->stopMoving();
		}
	}
	

}
void board::get(boardObject* out[30][30])
{
		for (int a=0; a<30; a++)
			for (int b=0; b<30; b++)
				out[a][b] = barray[a][b];
}

unitObject* board::findUnitInit(void)
{
		//return barray[0][0];
		return dynamic_cast<unitObject*> (barray[0][0]);
				
}

void board::print(boardObject* barray[30][30])
{
	cout << "     \t0\t1\t2\t3\t4\t5\t6\t7\n";
	cout <<	"     --------------------------------------------------------------------\n";
	for(i = 0; i<11; i++)
	{
		
		if (i < 30)
			cout << " ";
		cout << i; 
		cout << "|\t";

		for(j = 0; j<30; j++)
		{
			cout<<barray[i][j]->toString() + "\t";
		}
		cout<<"\n  | ";
		cout<<endl;
	}
}