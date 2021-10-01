#include<iostream>
using namespace std;
int hello(int a=5, int b=6)
{
	int c=0;
	c=a+b;
	return c;
}
int main()
{
	int a,b;
	cout<<"Hello world";
	cout<<hello(  a,  b);
}
