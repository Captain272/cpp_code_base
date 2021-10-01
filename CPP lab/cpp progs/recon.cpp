#include<iostream>
using namespace std;
int main()
{
	cout<<"Enetr the no box u need to print";
	int n;
	cin>>n;
	int rows,cols;
	rows=2*n-1;
	cols=2*n-1;
	int arr[rows][cols];
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<cols;j++)
		{
			if(i==0||j==0||i==cols-1||j==cols-1)
			{
				arr[i][j]=n;
			}
			else if(i==1||j==1||i==cols-2||j==cols-2)
			{
				arr[i][j]=n-1;
			}
			else if(i==2||j==2||i==cols-3||j==cols-3)
			{
				arr[i][j]=n-2;
			}
			else if(i==3||j==3||i==cols-4||j==cols-4)
			{
				arr[i][j]=n-3;
			}
			
		}
	}
	for(int k=0;k<rows;k++)
	{
		cout<<endl;
		for(int h=0;h<cols;h++)
		{
			cout<<arr[k][h]<<ends;
		}
	
	}
}
