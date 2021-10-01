#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the no of digits";
	cin>>n;
	int arr[n];
	cout<<"Enter Root :"<<endl;
	cin>>arr[0];
	int i=0;
	int l=0;
	int r=0;
	while(i<log(n)){
		cout<<"Enter the left child of "<<arr[i]<<endl;
		r=2*i+1;
		l=2*i+2;
		cin>>arr[r];
		cout<<"Enter the right- child of "<<arr[i]<<endl;
		cin>>arr[l];
		
		i++;
	}
	for(int j=0;j<n;j++)
	{
		cout<<arr[j];
	}
}
