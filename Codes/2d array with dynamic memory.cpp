#include<iostream>
using namespace std;
int main()
{
	int r,c,i,j;
	cout<<"Entert the no rows and coloums";
	cin>>r>>c;
	int **p;
	p = new int*[r];
	for(i=0;i<r;i++)
	{
		p[i]=new int[c];
	}
	i=0;
	j=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<"enter the value";
			cin>>p[i][j];
		}
	}
	
	i=0;
	j=0;
	for(i=0;i<r;i++)
	{
		cout<<endl;
		for(j=0;j<c;j++)
		{
			cout<<p[i][j]<<ends;
		}
	}
}
