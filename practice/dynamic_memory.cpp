#include<iostream>
using namespace std;

int main(){
//	int **p;
//	int r,c;
//	cout<<"Enter the no of Rows and cols";
//	cin>>r>>c;
//	cout<<"\nMemory allocation for cols\n";
//	p=new int*[c];
//	cout<<"\nMemory allocation rows\n";
//	for(int i=0;i<c;i++){
//		p[i]=new int[r];
//	}
//	cout<<"\nEnter the values";
//	for(int i=0;i<c;i++){
//		for(int j=0;j<r;j++){
//			cin>>p[i][j];
//		}
//	}
//	cout<<"\n------------Result-----------\n";
//	for(int i=0;i<c;i++){
//		for(int j=0;j<r;j++){
//			cout<<p[i][j]<<ends;
//		}
//		cout<<endl;
//	}
//	cout<<"\nDeleting the data\n";
//	delete p;
//	cout<<"\nDelete complete\n";
//	
//	
//		for(int i=0;i<c;i++){
//		for(int j=0;j<r;j++){
//			cout<<p[i][j]<<ends;
//		}
//		cout<<endl;
//	}



 int n;
 cin>>n;
 int l=1;
 int k=(n*(n+1))/2;
 for(int i=0; i<n ;i++)
	{
		cout<<endl;
		for(int j=0;j<=i;j++){
			cout<<l++<<ends;
		}
	}
	
}
