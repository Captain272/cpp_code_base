#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
template<class u>
class hello
{
	public:
		
		u a;
		hello()
		{
			//this->a=b;
			cout<<"SUN DIRECT LAGA DALA\nTHIS IS THE BASE CLASS\n";
			for(int i=0;i<3;i++)
			{
				Sleep(1000);
				cout<<"\rPlz wait"<<i;
			}
		}
	
};
template <class u>
class hi:public hello<u>
{

	public:
		hi(u c)
		{	
			system("cls");
			this->a=c;
			cout<<"JIO LIFE JINGALALA\nTHIS IS DERIVED CLASS";
		}
};

int main()
{
	//hello<int>he(8);
	hi <int> h(14);
}


