//VIRTUAL FUNCTION IN DERIVED CLASS

#include<iostream>
#include<conio.h>
using namespace std;
class upper
{
	public:
		int a;
		upper()
		{
			a=10;
		
		}
};

class lower:public upper
{
	public:
		virtual int hi()
		{
			cout<<"Hi folks";
		}
	
};

class lower2:public lower
{
	public:
		int hi()
		{
			cout<<"Hi Folks part 2";
		}
};
int main()
{
	upper up;
	lower ls,*q1;
	lower2 ls2,*q2;
	ls.hi();
	ls2.hi();
	cout<<ls.a;
	cout<<up.a;
	int s=up.a;
//	for(int i=0;i<100;i++)
//	{
//		system("cls");
//		cout<<s++;
//	}
	
}
