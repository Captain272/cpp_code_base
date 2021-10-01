//Q2)Write a program to declare a matrix class which has a data member integer array as 3 x 3 ,
//derive class matrix A from class matrix and matrix B from matrix A,
//all these classes should have a function show() to show the contents,
//read and show the elements of all three matrices. 


//THE QUESTION IS NOT THE SAME READ CAREFULLY!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include<iostream>
using namespace std;

class matrix
{
	public:
		int a[3][3];
		
		
		virtual int get()
		{
			cout<<"ENTER THE VALUE OF MATRIX\n";
			for(int i=0;i<3;i++)
			{
				for(int j=0;j<3;j++)
				{
					cin>>a[i][j];
				}
			}
		}
		
		
		virtual void show()
		{
			cout<<"ITS BASE CLASS\n";
			for(int i=0;i<3;i++)
			{   cout<<endl;
				for(int j=0;j<3;j++)
				{
					cout<<a[i][j]<<"  ";
				}
				cout<<endl;
			}
		}
};
class matrixa:public matrix
{
	public:
		int b;
		
		void show()
		{
			cout<<"ITS DERIVED CLASS\n";
			for(int i=0;i<3;i++)
			{   cout<<endl;
				for(int j=0;j<3;j++)
				{
					cout<<a[i][j]<<"  ";//Sample matrix 1 2 3 4 5 6 7 8 9
				}
				cout<<endl;
			}
		}
};
class matrixb:public matrixa
{
	public:
		int b;
	
		void show()
		{
			cout<<"ITS DERIVED2 CLASS\n";
			for(int i=0;i<3;i++)
			{ 	cout<<endl;
				for(int j=0;j<3;j++)
				{
					cout<<a[i][j]<<"  ";
				}
				cout<<endl;
			}
		}
};
int main()
{
	matrix m;
	matrixa ma;
	matrixb mb;
	
	
	m.get();
	m.show();
	ma.get();
	ma.show();
	mb.get();
	mb.show();
	

	
	
}
