//a) Write C++ Programs and incorporating various forms of Inheritance 
//i) Single Inheritance
//ii) Hierarchical Inheritance
//iii) Multiple Inheritances
//iv) Multi-level inheritance
//v) Hybrid inheritance
//b) Write a program to show Virtual Base Class
#include<iostream>
using namespace std;
class base
{
	public:
		base()
		{
			cout<<"CHIMPANZE\n";
		}
};
class single:public base
{
	public:
		single()
		{
			cout<<" INHERITED FROM CHIMPS------>HUMAN\n";
		}
};
class Heirarchical:public single
{
	public:
		Heirarchical()
		{
			cout<<"INHERITED FROM HUMANS -------->PARA PHITICAS\n";
		}
};
class Heirarchical1:public base
{
	public:
		Heirarchical1()
		{
			cout<<"INHERITED FROM HUMANS -------->BRYO PHITICAS\n";
		}
};
class Heirarchical2:public base
{
	public:
		Heirarchical2()
		{
			cout<<"INHERITED FROM HUMANS -------->ASTRILO PHITICAS\n";
		}
};
class horse
{
	public:
	horse()
	{
		cout<<"HORSE\n";
	}
};
class donkey
{
	public:
	donkey()
	{
		cout<<"DONKEY\n";
	}
};

class Multiinheritance:public horse,donkey
{
	public:
		Multiinheritance()
		{
			cout<<"COMBINATION OF DONKEY AND HORSE------->MULE\n";
		}
};
class multilevel :public single
{
	public:
		multilevel()
		{
			cout<<"LATEST HUMAN GENERATION FROM PARA,DRYO,ASTRILO --------->HOMO SAPIENS\n";
		}
};

int main()
{
	base b;
	cout<<"\n";
	single s;
	cout<<"\n";
	Heirarchical h1;
	cout<<"\n";
	Heirarchical1 h2;
	cout<<"\n";
	Heirarchical2 h3;
	cout<<"\n";
	Multiinheritance mi;
	cout<<"\n";
	multilevel ml;
}
