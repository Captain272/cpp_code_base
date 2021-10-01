#include<iostream>
#include<math.h>
using namespace std;

float solve(int a,int b,int c){
	float sol;
	float d=pow(b,2)-(4*a*c);
	int n;
	if(d==0 || d>0){
		n=1;
	}
	else{
		n=2;
	}
	switch(n){
	case 1:
		cout<<"\n the roots are real\n";
		cout<<(-b+sqrt(d))/2*a<<" and "<<(-b-sqrt(d))/2*a;
		break;
	
	case 2:
		cout<<"\n one root is imaginary and one is real\n";
		cout<<(-b)/2*a+(sqrt(d))/2*a<<"i and"<<(-b)/2*a+(sqrt(d))/2*a;
		break;
	}
//	case :
//		cout<<-b/2*a;
}

int main(){
	float result;
	int a,b,c;
	cout<<"\n Enter the values\n";
	cin>>a>>b>>c;
	solve(a,b,c);
	
}
