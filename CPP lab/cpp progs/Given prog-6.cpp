//Exercise – 6 Write a program for illustrating Access Specifiers public, private, protected 
//a) Write a program implementing Friend Function 
//b) Write a program to illustrate this pointer 
//c) Write a Program to illustrate pointer to a class
#include<iostream>
using namespace std;
class derive;
class specific
{

private:
	int a;
	
public:
	int b;
	int setup (int s)
	{
		this->a= s;
		
		//cout<<endl<<s;
	}
	
	friend int show(specific ,derive);
	
	
protected:
	int c;
	
};

class derive:public specific
{
	public :
		int input(int d)
		{
			//this->b=0;
			//cout<<b;
			this->c=d;
			//setup(8);
			//cout<<"\n"<<c;
		}
};

int show(specific n,derive m)
{
	cout<<n.a<<endl<<n.b<<endl<<m.c;
}

int  main()
{
	
	class specific test,*t;
	class derive  pro,*p;
	int a;
	test.b=3;
	//cout<<test.b;
	cout<<"Enetr the value\n";
	cin>>a;
	t=&test;
	p=&pro;
	pro.input(a);
	test.setup(a);
	show(*t,*p);
	
}
