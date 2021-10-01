//Without Change reached comes 3 times give 0 9 press enter
#include<iostream>
using namespace std;
int y =0;//This to integer is to stop after reaching first way
int w[100];
int shortest(int ar[][10],int s,int f,int n)
{

		for (int i=s;i<=s;i++)
		{
		for (int j=0;j<n;j++)
			{
				if(ar[i][j]==1)
				{
					if(j==f) //&& y==0)
					{
						cout<<"\nREACHED"<<j;
						y=1;	
						return 0;
					}
					else //if (y==0)
					{
						cout<<i;
						ar[i][j]=-1;
						ar[j][i]=-1;
//						cout<<"\nNew one begin\n";
						shortest(ar,j,f,n);
					}
					
				}
				
			}
		}
}

void push(int ar[],int a)
{
	int i=0;
	while (ar[i]!=0)
	{
		i++;	
	}
	ar[i]=a;
	
}
void pop(int ar[],int a)
{
	int i=0;
	while (ar[i]!=0)
	{
		i++;	
	}
	ar[i]=0;
	
}
int main()
{
//	cout<<"Enter the no. of nodes: ";
//	int n;
//	cin>>n;
//	cout<<"\nIs the graph directed or undirected(y/n): ";
//	char g;
//	cin>>g;
//	int f;
//	for (int i=0;i<n;i++)
//	{
//		cout<<endl;
//		for (int j=0;j<n;j++)
//		{
//			ar[i][j]=0;
//		}
//	}
//	for(int i=0;i<n;i++)
//	{
//		cout<<"\nEnter the no of friends" << i+1<<" have :";
//		cin>>f;
//		for (int j=0;j<f;j++)
//		{
//			cout<<"Enter the friend node";
//			int a;
//			cin>>a;
//			ar[i][a-1]=1;
//		}
//	}
	int ar[10][10]={
	{0,0,1,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,0,0},
	{1,1,0,1,0,0,1,0,0,0},
	{0,0,1,0,1,1,1,1,0,0},
	{0,0,0,1,0,0,0,0,0,0},
	{0,0,0,1,0,0,0,1,1,1},
	{0,0,1,1,0,0,0,1,0,0},
	{0,0,0,1,0,1,1,0,1,0},
	{0,0,0,0,0,1,0,1,0,1},
	{0,0,0,0,0,1,0,0,1,0}
	};
	int n=10;
	for (int i=0;i<n;i++)
	{
		cout<<endl;
		for (int j=0;j<n;j++)
		{
			cout<<ar[i][j]<<ends;
		}
	}
		int s,final;
		cout<<"Enter the starting node and final node";
		cin>>s>>final;
	shortest(ar,s,final,n);
	
}
