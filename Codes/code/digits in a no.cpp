#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;
int main()
{
	int a,b,i,j,rem,quo,s,sum=0;
	cout<<"enter the no that u want"<<'\t'<<"enter the highest power";
	cin>>a;
	cin>>b;
	j=10*b;
	quo=a;
	while(quo)
	{
		rem=quo%10;
		cout<<rem<<'\t';
		quo=quo/10;
		s++;
	}
	j=a;
	while(j)
	{
		i=j%10;
		sum=sum+pow(i,s);
		j=j/10;
	}
	cout<<sum;
	
}
