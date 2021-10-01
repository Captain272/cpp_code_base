//CONSTRUCTOR AND VIRTUAL FUNCTION//
#include<iostream>
#include<conio.h>
#include <Windows.h>
using namespace std;
class upper
{
	public:
		int a;
		upper(int y)
		{
			a=y;
		}
		virtual void show()
		{
			cout<<a<<"--------BASE CLASS\n";
		}
	
};

class lower:public upper
{
	public:
		int b;
		lower(int x,int y):upper(x)
		{
			b=y;
		}
		
		void show()
		{
			cout<<a<<"--------Derived class\n"<<b<<"---------Derived class";
		}
};
int main()
{
	int a;
	cout<<"Good Morning Bhai\n";
	for(int i=0;i<4;i++)
	{
	Sleep(1000);
	cout<<"\rPLZ WAIT"<<i;
}
	system("cls");
	upper up(3);
	lower ls(10,20);
	up.show();
	ls.show();
	
	
	
}
