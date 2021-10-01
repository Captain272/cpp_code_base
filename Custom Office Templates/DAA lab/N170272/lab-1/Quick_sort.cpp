#include<iostream>
using namespace std;

int party(int arr[],int l,int r){
	int i=l-1;
	int j=l;
	int k=r;
	int temp;
	while(j<k){
		if(arr[r]>arr[j]){
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		j++;
	}
	temp=arr[i+1];
	arr[i+1]=arr[k];
	arr[k]=temp;
	return(i+1);
}

int quick_sort(int arr[],int l,int r){
	if(l<r){
		int m=party(arr,l,r);
		quick_sort(arr,l,m-1);
		quick_sort(arr,m+1,r);
	}
}

int main(){
	int arr[8];
	cout<<"Quick Sort \n before sort \n\n";
	for(int i=0;i<8;i++){
		arr[i]=8-i;
		cout<<arr[i];
	}
	
	quick_sort(arr,0,8-1);
	cout<<"\n\n After Sort";
	for(int i=0;i<8;i++){
		cout<<arr[i]<<ends;
	}
}
