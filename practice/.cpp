#include<iostream>
using namespace std;

int party(int arr[],int p, int r){
	int x=arr[r];
	int i=p-1;
	int j=p;
	for(int k=p;k<r;k++){
//	while(j<r){
		if(x>arr[j]){
			i++;
			swap(arr[i],arr[j]);
//			int temp=arr[i];
//			arr[i]=arr[j];
//			arr[j]=temp;
			j++;
		}
		else{
			j++;
		}
	}
	swap(arr[i+1],arr[r]);
//	int temp=arr[j+1];
//	arr[j+1]=arr[r];
//	arr[r]=temp;
	return i+1;
}

void swap(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void quicksort(int arr[],int p,int r){
	if(p<r){
		int q=party(arr,p,r);
		quicksort(arr,p,q-1);
		quicksort(arr,p+1,q);
	
	}
}



int main(){
	int arr[6]={6,5,4,3,2,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,n);
	cout<<n<<endl;
	for(int i=0;i<6;i++){
		cout<<arr[i]<<ends;
	}
	int a,b;
	a=4;
	b=8;
//	swap(a,b);
//	cout<<b<<ends<<a;
}
