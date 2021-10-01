#include<iostream>
using namespace std;
int main()
{
	 int *p1;    int  *p2;    int  *p3;     p1=new int(10);    p2=new float(24.7);    p3=new char(‘R’);    cout<<*p1<<endl;    cout<<*p2<<endl;    cout<<*p3<<endl;   delete p1;   delete p2;   delete p3;   return 0; 
	
}
