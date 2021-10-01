#include<iostream>
using namespace std;
int sum1(int a,int b)
{
	cout<<a+b<<endl;
}
int sum2(int *a,int *b)
{
	cout<< *a+*b;
}
int main()
{
	int a,b,*ptr1,*ptr2;
	cin>>a>>b;
	ptr1=&a;
	ptr2=&b;
	sum1(a,b);
	sum2(ptr1,ptr2);
	
}
