//Q1)Writse a program to declare a function display( )
//in base and derived class. print a message through the function to know the
//name of the class whose member
//function is executed.use the late binding concept using the virtual keyword 
#include<iostream>
using namespace std;
class base
{
	public:
		int a;
		virtual void display()
		{
			cout<<"ITS BASE CLASS\n";
		}
};
class derived:public base
{
	public:
		int b;
		void display()
		{
			cout<<"ITS DERIVED CLASS\n";
		}
};
int main()
{
	base b;
	derived d;
	b.display();
	d.display();
}
