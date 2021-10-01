#include<iostream>
using namespace std;


int party(int arr[],int p,int q){
	int i=p-1;
	int j=p;
	int k=q;
	int temp;
	while(j<k){
		if(arr[j]<=arr[k]){
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

int quick_sort(int arr[],int p,int q){
	if(q-p>0){
		int m=party(arr,p,q);
		quick_sort(arr,p,m-1);
		quick_sort(arr,m+1,q);
	}
}

int main(){
	cout<<"<-----------Quick Sort------------->\n";
	int arr[9]={1,2,3,4,5,6,7,8,9};
	quick_sort(arr,0,9);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<ends;
}

}
