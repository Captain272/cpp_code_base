#include<iostream>
using namespace std;
int length=0;
//int stack[6];

int heapify(int arr[],int n,int i){
	int largest=i;
	int l=(2*i)+1;
	int r=(2*i)+2;
	
	if(l<n && arr[l]>arr[largest]){
		largest=l;
	}
	if(r<n && arr[r]>arr[largest]){
		largest=r;
	}
	if(largest!=i){
		int temp;
		temp=arr[largest];
		arr[largest]=arr[i];
		arr[i]=temp;
		heapify(arr,n,largest);
	}
	
}

int heapsort(int arr[],int n){
	for(int i=n/2-1;i>=0;i--)
	{
		heapify(arr,n,i);
	}
	for(int i=n-1;i>0;i--){
		int temp;
		temp=arr[i];
		arr[i]=arr[0];
		arr[0]=temp;
		heapify(arr,i,0);
	}
}


int main(){
	int arr[6]={12, 11, 13, 5, 6, 7};
	int n=sizeof(arr)/sizeof(arr[0]);
	heapsort(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<ends;
	}
//	cout<<n;
	
}
