//a) Write a program illustrating Inline Function 
//b) Write a program illustrates function overloading.
//c) Write a program illustrates the use of default arguments for simple interest function.
#include<iostream>
using namespace std;
inline int  hello()
{

		
	cout<<"Hello world"<<endl;
	return 120;

}
int hello(int a)
{
	cout<<a<<endl;
}
int hello(int a,int b)
{
	cout<<a+b<<endl;

}
void simple(int principle,int time,int rate=3)
{
	cout<<(principle*rate*time)/100;
}

int main()
{
	int b;
	b=hello();
	cout<<b;
	int principle,rate,time,c;
	c=1;
	while(c!=0)
	{
	cout<<"\nEnetr 0 to exit else to continue enter any other   :";
	cin>>c;
	cout<<endl<<"Enter the principle amount\nEnter the rate of intrest if any else -1\nEnetr the time period in years";
	cin>>principle>>rate>>time;
	if(rate==-1)
	{
		simple(principle,time);
	}
	else
	{
		simple(principle,time,rate);
	}	
}

}
