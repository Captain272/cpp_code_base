#include<iostream>
using namespace std;
#define infinity 9999999

//void short(){
//	
//}

void print(int arr[][5]){
	cout<<"Printed better";
	int n=10;
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				arr[i][j]=min(arr[i][j],arr[i][k]+arr[j][k]);
			}
		}
	}
}

//flod warshall alorithm with O(n^3) time complexity
int main(){
	int arr[5][5];
	print(arr);
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<arr[i][j];
		}
		cout<<endl;
	}
}

