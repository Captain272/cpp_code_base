#include<iostream>
using namespace std;

void sort(int arr[],int l){
//	int l=arr.length();
	int min=0;
	for(int i=0;i<l;i++){
		min=arr[i];
		for(int j=i+1;j<l;j++){
			if(arr[i]>arr[j]){
				min=j;
			}
		}
				int temp;
				temp=arr[i];
				arr[i]=arr[min];
				arr[min]=temp;
	}
	for(int i=0;i<l;i++){
		cout<<arr[i]<<ends;
	}
}

int main(){
	int arr[5]={5,4,3,2,1};
	int l=sizeof(arr)/sizeof(arr[0]);
	sort(arr,l);
	
}
