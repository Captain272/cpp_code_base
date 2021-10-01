#include<iostream>
using namespace std;
int bubble(int *arr)
{
	int i,k,max,l;
	max=(arr[i]);
	for(int j=0;j<5;j++)
	{
		
		for(i=1;i<5;i++)
	{
		if((arr[i-1])>(arr[i]))
		{
		cout<<arr[i-1]<<">"<<(arr[i]);
			k=(arr[i-1]);
			l=(arr[i]);
			(arr[i])=k;
			(arr[i-1])=l;
			cout<<k<<ends<<l;
					}
		
		
	}
}
}

int insertionsort(int *arr)
{
	 int i, key, j; 
	for (i = 1; i < 5; i++) 
	{ 
		key = arr[i]; 
		j = i - 1; 

		while (j >= 0 && arr[j] > key) 
		{ 
			arr[j + 1] = arr[j]; 
			j = j - 1; 
		} 
		arr[j + 1] = key; 
	} 
} 
	
	

int selectionsort(int *arr)
{
	for(int i=0;i<5;i++)
	{ int min=arr[i];
		for(int j=i+1;j<5;j++)
		{
			if(min>arr[j])
			{
				int h;
				h=min;
				min=arr[j];
				arr[j]=h;
			}
			arr[i]=min;
			
		}
	}
	
}
int merge(int *arr)
{
	
}
int partition (int arr[], int low, int high) 
{ 
	int pivot = arr[high];  
	int i = (low - 1); 
	for (int j = low; j <= high - 1; j++) 
	{ 
		if (arr[j] < pivot) 
		{ 
			i++; 
			int m;
			m=arr[j];
			arr[j]=arr[i];
			arr[i]=m;
		} 
	} 
	
	int n;
			n=arr[i+1];
			arr[i+1]=arr[high];
			arr[high]=n; 
	return (i + 1); 
} 


void quickSort(int arr[], int low, int high) 
{ 
	if (low < high) 
	{ 
		int pi = partition(arr, low, high); 
 
		quickSort(arr, low, pi - 1); 
		quickSort(arr, pi + 1, high); 
	} 
} 
int main()
{
	int ar[5],*arr;
	arr=ar;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the element"<<i;
		cin>>ar[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<ar[i]<<endl;
		
		
	}
	quickSort(arr,0,4);
	for(int i=0;i<5;i++)
	{
		cout<<ar[i]<<endl;
		
	}
}
