#include<iostream>
#include<math.h>
using namespace std;

int rec(int i){
	int res;
	if(i==0){
		return 1;
	}
	else{
		res=i*rec(i-1);
		return res;
	}
}

int main(){
//	int i=5;
//	int res=rec(i);
//	cout<<res;
	int a=3;
	cout<<pow(a,3);
}
