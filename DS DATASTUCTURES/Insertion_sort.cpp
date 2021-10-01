#include<iostream>
using namespace std;
int main()
{
	
	int arr[5]={5,3,2,4,1};
	int swap,u;
	
	cout<<"INSERTION SORT\n"<<"----------------\n";
	for(int i=0;i<4;i++)
	{
		int k=i+1;
		for(int j=k;j>=0;j--)
		{
			if(arr[j]<=arr[j-1])
			{
				swap=arr[j-1];
				arr[j-1]=arr[j];
				arr[j]=swap;
			}
			
				for(int g=0;g<5;g++)
				{
					cout<<arr[g];
				}
					cout<<"\n\/  \/ \/\n";
		}
	}
	

	
	
} 
