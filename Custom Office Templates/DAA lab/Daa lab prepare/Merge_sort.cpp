#include<iostream>
using namespace std;

void merge(int arr[],int p,int q,int m){
	int ar1[m-p+1];
	int ar2[q-m];
	for(int i=0;i<m-p+1;i++){
		ar1[i]=arr[p+i];
	}
	for(int i=0;i<q-m;i++){
		ar2[i]=arr[m+i];
	}
	int i=0;
	int j=0;
	int k=0;
	
	while(i<m-p+1 && j<q-m){
		if(ar1[i]<ar2[j]){
			arr[p+k]=ar1[i];
			i++;
			k++;
		}
		else{
			arr[p+k]=ar2[j];
			j++;
			k++;
		}
	}
	
	while(i<m-p+1){
		arr[p+k]=ar1[i];
		i++;
		k++;
	}
	while(j<q-m){
		arr[p+k]=ar2[j];
		k++;
		j++;
	}
}


void merge_sort(int arr[],int p,int q){
	if(q-p>0){
		int m=p+(q-p)/2;
		cout<<p<<ends<<q<<ends<<m<<endl;
//		merge(p,q,m+1);
		merge_sort(arr,p,m);
		merge_sort(arr,m+1,q);
//		merge(arr,p,m,q);
	}	
}


int main(){
	cout<<"<-----------Merge Sort------------->\n";
	int arr[9]={1,2,3,4,5,6,7,8,9};
	merge_sort(arr,0,9);
	for(int i=0;i<9;i++){
		cout<<arr[i]<<ends;
	}
}

