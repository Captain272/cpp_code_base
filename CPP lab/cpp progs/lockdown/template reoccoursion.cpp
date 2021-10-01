#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
template<class u>
class count
{
	public:
		count()
		{
			
		cout << "counting started\n";
		for(int i=0;i<3;i++)
		{
			Sleep(1000);
			cout<<"\rplz wait"<<i;
		}
	}
		u sum(u a);
};

template<class u>
u count<u>::sum(u n){
//	int sumb=0;
//	int b;
//	b=a;
//	cout<<b;
	try
	{
		if(n<0)
		{
			throw 99;
		}
		else if(n==0)
		{
			throw 'k';
		}
		else
		{
		if(n==0)
			{
				return 0;
			}
			else
			{	
				return n+sum(n-1);
			}
	}
}
catch(int x)
		{
			cout<<"\n NO NEGATIVES DUDE THE ANSWER WILL BE 1 \n"<<"Error"<<x;
		}
catch(char x)
{
	cout<<"\n HAPPYBIRTHday";
	}	


}
int main()
{
	int a;
	cout<<"ENTER THE VALUE TO GET THE SUM";
	cin>>a;
	count<int>ct;
	int r;
	r=ct.sum(a);
	cout<<endl<<"THE ANSWER IS:---"<<r;
}
