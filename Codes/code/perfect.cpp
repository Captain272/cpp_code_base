#include<iostream>
using namespace std;
int main()
{
	int a,b,i=0,j,sum=0;
	cout<<"enter the no";
	cin>>a;
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum=sum+i;
			cout<<'\t'<<sum<<'\t';
		}
	}
}
