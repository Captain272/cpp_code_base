//Factorial using recurssion 



#include<iostream>

using namespace std;
int recur(int);

int main(){
	int n;
	cout<<"Enter a num to find factorial:"<<endl;
	cin>>n;
	cout<<"factorial is "<<recur(n)<<endl;
}

int recur(int i){
	// int fac =0
	if(i <=1){
		return 1;
	}
	else{
		return i*recur(i-1);
	}
}