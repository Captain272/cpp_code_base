//Exercise -7 
//a). Write a program to Overload Unary, and Binary Operators as Member Function, 
//and Non Member Function. i. Unary operator as member function ii. Binary operator 
//as non member function b). Write a c ++ program to implement the overloading 
//assignment = operator
#include<iostream>
using namespace std;

class minus
{
	int x;
	public:
		minus()
		{
			cout<<"Enetr the value of the element";
			cin>>x;
		}
		void operator -()
		{
			x=-x;
		}
		void show()
		{
			cout<<x;
		}
};
int main()
{
	int i,a,b,n;
	cout<<"Hello World"<<endl;
	class minus m1;
	-m1;
	m1.show();
	
	
}
