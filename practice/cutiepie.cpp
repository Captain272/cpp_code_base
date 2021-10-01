#include<iostream>
using namespace std;

int party(int arr[],int p,int q)
{
	int i,j,k;
	i=p-1;
	j=p;
	k=arr[q];
	while(j<q)
	{
		if(arr[j]<k)
		{
			int temp;
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			j++;
		}
		else{
		j++;
	}
	}
	int temp;
	temp=arr[i+1];
	arr[i+1]=arr[q];
	arr[q]=temp;
	for(int i=0;i<9;i++)
	{	
		cout<<arr[i];
	}
	cout<<ends<<i+1<<endl;
	return i+1;
}

int quick(int arr[],int p,int q)
{
	if(p<q)
	{
		int r=party(arr,p,q);
		cout<<ends<<p<<ends<<r<<ends<<q<<endl;
		quick(arr,p,r-1);
		quick(arr,r+1,q);
	}
	
}


int main()
{
	int n;
	cout<<"enter the no. of elenemts";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quick(arr,0,n-1);
	for(int i=0;i<n;i++)
	{	
		cout<<arr[i];
	}
}
