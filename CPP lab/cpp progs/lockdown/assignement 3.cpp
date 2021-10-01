//COSTRUCTORS EXPLICIT CALL
#include<iostream>
using namespace std;
class upper
{
	public:
		int a;
		upper()
		{
			cout<<"Upper Constructor\n";
		}
		~upper()
		{
			cout<<"upper Distructo\n";
		}
};

class lower:public upper
{
	public:
		lower()
		{
			cout<<"lower Constructor\n";
		}
		~lower()
		{
			cout<<"lower Distructor\n";
			
		}
};

class lower2:public lower
{
	public:
		lower2()
		{
				cout<<"lower2 Constructor\n";
			
		}
		~lower2()
		{
			cout<<"lower2 Distructor\n";
			
		}	
};

int main()
{
	cout<<"TYPE 1)Automatic call while created\n\n";
	upper up;
	lower lw;
	lower2 lw2;
	
	cout<<"TYPE 2)\n 	upper();\n  up.~upper();\n\n";
	upper();
	up.~upper();
	
	cout<<"TYPE 1)Automatic call of distructors while ended\n\n";
	

}

