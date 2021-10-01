#include<iostream>
#include<conio.h>
#include<Windows.h>
using  namespace std;
template<class u,class g,class v,class z>
class hello
{
	public:
//	u u;
//	v v;
//	z z;
	hello(u c,g m,v b,z h)
	{
		cout<<c<<m<<b<<endl<<h<<endl ;
		cout<<"kgug";
	}
	z outer();
};
template<class u>
void function(u a)
{
	cout<<endl<<"This is function not member function";
	//return a;
}

template<class u,class g,class v,class z>
z hello<u,g,v,z>::outer(){
	cout<<"\nDone with the member function of class toooo!!!!!!!";
}

int main()
{
	int a=1;
	char b = 't';
	char x= 's';
	string c="Time execution" ;
	hello<int,char,char,string>h(a,x,b,c);
	//Sleep(2000);
	for(int i=0;i<3;i++)
	{
		Sleep(1000);
		cout<<"\r"<<"PLZ WAIT"<<i;
	}
	
	//system("cls");
	cout<<"\nEXECUTION SUCCESFUL";
//	int m=1 , q=1 ;
// 	while ( m < 80 * 50 )
// 	{
//  		cout<<q;
//  		m++ ;
// 	}
	function(12);
	h.outer();
	
	cout<<"HEllo World";

//	char sm=sml;
//	cout<<sm;
	function(12);
	
}
