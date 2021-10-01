#include<iostream>
using namespace std;

void merge(int arr[],int l,int m,int r){
	int n1,n2;
	n1=m-l+1;
	n2=r-m;
//	cout<<n1<<ends<<n2<<endl;
	int L[n1],R[n2];
//	L[n1]=999999999;
//	R[n2]=999999999;
	int i,j,k;

	for(int i=0;i<n1;i++){
		L[i]=arr[l+i];
	}
	for(int j=0;j<n2;j++){
		R[j]=arr[m+1+j];
	}
	
	for(int i=0;i<n1;i++){
		cout<<L[i]<<ends;
	}
	cout<<endl;
	for(int j=0;j<n2;j++){
		cout<<R[j]<<ends;
	}
	i=0;
	j=0;
	k=l;
//	while(L[i]!=999999999 && R[j]!=999999999){
	while(i<n1 && j<n2){
//		cout<<L[i]<<ends<<L[j]<<endl;
		if(L[i]<=R[j]){
			arr[k]=L[i];
//			k++;
			i++;
		}
		else if(L[i]>R[j]){
			arr[k]=R[j];
//			k++;
			j++;
		}
		k++;
	}
	while(i<n1){
		arr[k]=L[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=R[j];
		j++;
		k++;
			}
			
}

void mergesort(int arr[],int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		cout<<l<<ends<<m<<ends<<r<<endl;
		mergesort(arr,l,m);
		mergesort(arr,m+1,r);
		merge(arr,l,m,r);
	}
}






int main(){
	int arr[6]={12, 11, 13, 5, 6, 7};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<n;
	mergesort(arr,0,n);
//	mergeSort(arr,0,n);
	cout<<endl<<n<<endl;
	for(int i=0;i<6;i++){
		cout<<arr[i]<<ends;
	}
}

//merge(int arr[],int l,int m,int r){
//	int i,j,k;
//	int n1,n2;
//	n1=m-l+1;
//	n2=r-m;
////	cout<<n1<<ends<<n2<<endl;
//	int L[n1],R[n2];
//	for(int i=0;i<n1;i++){
//		L[i]=arr[l+i];
////		cout<<endl<<L[i]<<ends;
//	}
//	cout<<ends;
//	for(int j=0;j<n2;j++){
//		R[j]=arr[m+1+j];
////		cout<<ends<<R[j]<<ends;
//	}
////	L[n1-1]=999999999;
////	R[n2-1]=999999999;
//	i=0;
//	j=0;
//	k=l;
////	while(L[i]!=999999999 && R[j]!=999999999 ){
//	while(i<n1 && j<n2){
//		if(L[i]<=R[j]){
////			cout<<L[i]<<ends<<R[j]<<"Left is less"<<endl;
//			arr[k]=L[i];
//			i++;
//			k++;
//		}
//		else{
////			cout<<L[i]<<ends<<R[j]<<"Right is less"<<endl;
//			arr[k]=R[j];
//			j++;
//			k++;
//		}
//	}
//	
//	while(i<n1){
//		arr[k]=L[i];
//		k++;
//		i++;
//	}
//	while(j<n2){
//		arr[k]=R[j];
//		k++;
//		j++;
//	}
////	cout<<endl;
////	for(int i=0;i<n1+n2-2;i++){
////		cout<<arr[i]<<ends;
////	}
//}
//
//mergesort(int arr[],int l,int r){
//	if(l<r){
//		int m=l+(r-l)/2;
//		
////		cout<<l<<ends<<m<<ends<<r<<endl;
//		mergesort(arr,l,m);
//		mergesort(arr,m+1,r);
//		merge(arr,l,m,r);
//	}
//}




//
//int main(){
//	int arr[6]={6,5,4,3,2,1};
//	int n=sizeof(arr)/sizeof(arr[0]);
//	mergesort(arr,0,n);
//	for(int i=0;i<n;i++){
//		cout<<arr[i]<<ends;
//	}
//}
