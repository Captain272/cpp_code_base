#include<iostream>
using namespace std;

int main()
{
	int a[5],b,i,j,n,min,temp;
	cout<<"enter the no. of nos in array";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"Before sorting"<<endl;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i;j<n;j++)
		{
			if(a[j]<a[min])
			min=j;
		}
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	cout<<"After sorting";
}

