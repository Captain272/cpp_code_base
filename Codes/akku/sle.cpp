#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int arr[6]={6,5,4,3,2,1};
	int i=0;
	int j=0;
	int min;
//	for(i=0;i<6;i++){
//		min=i;
//		for(j=i;j<6;j++){
//		if(arr[min]>arr[j]){
//			min=j;
//		}
//	}
//		int temp;
//		temp=arr[i];
//		arr[i]=arr[min];
//		arr[min]=temp;
//	}
	
	for(i=1;i<6;i++){
		min=arr[i];
		j=i-1;
		while(min<arr[j] && j>=0 ){
//		int temp;
//		temp=arr[j];
//		arr[j]=arr[min];
//		arr[min]=temp;
//		j--;
		arr[j+1]=arr[j];
		j--;
		}
		arr[j+1]=min;
	}
	i=0;
	for(i=0;i<6;i++){
		printf("%d\t",arr[i]);
	}
}

