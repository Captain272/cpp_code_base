#include<iostream>
using namespace std;
void heapify(int arr[],int n,int i)
{
	int largest=i;
	int l=2*i+1;
	int r=2*i+2;
	if(l<n && arr[l]>arr[largest])
	{
		largest=l;
	}
	if(r<n && arr[r]>arr[largest])
	{
		largest=r;
	}
	if(largest!=i)
	{
		int temp=arr[i];
		arr[i]=arr[largest];
		arr[largest]=temp;
		heapify(arr,n,largest);
	}
}

void heap_sort(int arr[],int n)
{
	int i;
	for(i=(n/2)-1 ; i>=0 ; i--)
	{
		heapify(arr,n,i);
	}
	for(i=n-1;i>=0;i--)
	{
		int temp=arr[0];
		arr[0]=arr[i];
		arr[i]=temp;
		heapify(arr,i,0);
	}
}

void display(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	
}
int main()
{
	int n=8,i;
	int arr[n];
	for(i=0;i<n;i++)
	{
		arr[i]=n-i;
	}
	cout<<"\nheap Sort\n";
	cout<<"Array before sorting : ";
	display(arr,n);
	cout<<"\n";
	heap_sort(arr,n);
	
	cout<<"Array after  sorting : ";
	display(arr,n);
    cout<<"\n";
	return 0;
}
