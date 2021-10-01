#include<iostream>
using namespace std;

void ref(int &a,int &b){
	cout<<a<<ends<<b;
}

void value(int a,int b){
	cout<<a<<ends<<b;
}

int main(){
	int a=5;
	int b=4;
	ref(a,b);
	value(a,b);
	 int **p,r,c,i,j;
// cout<<”Enter no of rows & colons”;
 cin>>r>>c;
 p = new int*[r];
 for(int i=0;i<r;i++)
 {
 p[i] =new int[c];
 } 
}
