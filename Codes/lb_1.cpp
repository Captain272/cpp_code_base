//Swapping using call by value and call by reference and swapping without thrid variable



#include<iostream>

using namespace std;

int cal_val(int ,int );
int cal_ref(int* ,int*);
int no_thrid_var(int ,int);

int main(){
	int a,b;
	cout<<"Enter the values of a and b :\n";
	cin>>a>>b;
	cout<<"\tYou entered:\n\t\ta :\t"<<a<<"\n\t\tb :\t"<<b<<endl;


	cal_val(a,b);

	cout<<"After call by value\na :\t"<<a<<"\nb :\t"<<b<<endl;
	cal_ref(&a,&b);
	cout<<"After call by ref\na :\t"<<a<<"\nb :\t"<<b<<endl;
	no_thrid_var(a,b);




}

int cal_val(int i,int j){
	int temp = j;
	j = i;
	i = temp;
	cout<<"In fun:\na:\t"<<i<<"\nb:\t"<<j<<endl;
}

int cal_ref(int* i,int* j){
	int temp = *j;
	*j = *i;
	*i = temp;
	cout<<"In fun:\na:\t"<<*i<<"\nb:\t"<<*j<<endl;
}

int no_thrid_var(int i,int j){
	i = i+j;
	j = i-j;
	i -=j;
	cout<<"In the function (no_thrid_var):\n\ta:\t"<<i<<"\n\tb:\t"<<j<<endl;
}