//a) Write a Program in C++ to illustrate the order of execution of constructors and
//destructors in inheritance
//b) Write a Program to show how constructors are invoked in derived class 
//c) Write a program to illustrate runtime polymorphism 
//d) Write a program to illustrate this pointer
#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"THIS IS BASE CLASS]\n";
		}
		virtual void jio()
		{
			cout<<"Base";
		}
		~base()
		{
			cout<<"THIS IS BASE CLASS]\n";
		}
		
		
};
class derived:public base
{
	public:
	derived()
	{
		cout<<"THIS IS FIRST DERIVED CLASS\n";
	}
	void jio()
		{
			cout<<"Base1";
		}
	~derived()
	{
		cout<<"THIS IS FIRST DERIVED CLASS\n";
	}
};
class derived1:public derived
{
	public:
	derived1()
	{
		cout<<"THIS IS SECOND DERIVED CLASS\n";
	}
	void jio()
		{
			cout<<"Base2";
		}
	~derived1()
	{
		cout<<"THIS IS SECOND DERIVED CLASS\n";
	}
};
class derived2:public derived1
{
	public:
	derived2()
	{
		cout<<"THIS IS THIRD DERIVED CLASS\n";
	}
	void jio()
		{
			cout<<"Base3";
		}
	~derived2()
	{
		cout<<"THIS IS THIRD DERIVED CLASS\n";
	}
};
class derived3:public derived2
{
	public:
	derived3()
	{
		cout<<"THIS IS FOURTH DERIVED CLASS\n";
	}
	void jio()
		{
			cout<<"Base4";
		}
	~derived3()
	{
		cout<<"THIS IS FOURTH DERIVED CLASS\n";
	}
};
int main()
{
	base b;b.jio();
	cout<<"\n";
	derived d;d.jio();
	cout<<"\n";
	derived1 d1;d1.jio();
	cout<<"\n";
	derived2 d2;d2.jio();
	cout<<"\n";
	derived3 d3;d3.jio();
	cout<<"\n";
	
}

