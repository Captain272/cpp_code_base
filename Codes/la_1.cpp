#include<iostream>
#include<cmath>
#include<cstdlib>
// #include<cstring>

using namespace std;

int main(){
	int a,b,c,f=0;
	float root_1,root_2;
	cout<<"Eq::  ax^2 + bx + c = 0"<<endl<<"enter the values of a b c"<<endl;
	cin>>a>>b>>c;
	cout<<"Eq: "<<a<<"x^2  +"<<b<<"x +"<<c<<" =0"<<endl;
	if(a==0){
		cout<<"Invalid Eq"<<endl;
		exit(0);
	}


	int val = (b*b) - (4*(a*c));

	if (val == 0){
		f = 0;
	}
	else if (val>0){
		f = 1;
	}
	else{
		f = -1;
	}

	// int res = strcmp()
	switch (f)
	{
		case 0:
			root_1 = -b/(2*a);
			root_2 = root_1;
			cout<<"Roots are real and equal:"<<root_1<<"\t"<<root_2<<endl;
			break;
		case 1:
			root_1 = (-b+pow(val,0.5))/(2*a);
			root_2 = (-b-pow(val,0.5))/(2*a);
			cout<<"Roots are real:"<<root_1<<"\t"<<root_2<<endl;
			break;
		default:
			cout<<"No real Roots exists."<<endl;
			break;
	}


	return 0;
}