//Bellman Equation 
#include <iostream>
using namespace std;
int main()
{
	int map[3][4]={{0,0,0,1},
		{0,0,0,-1},
		{0,0,0,0}
	};
	for (int i=0;i<3;i++)
	{
		cout<<endl;
		for(int j=0;j<4;j++)
		{
			cout<<map[i][j];
		}
	}
	
	

}

