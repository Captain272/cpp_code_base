//Create a Distance class with: 
//• Feet and inches as data members 
//• Member function to input distance 
//• Member function to output distance 
//• Member function to add two distance objects
//a).Write a main function to create objects of DISTANCE class. Input two distances and output the sum.
//b). Write a C++ Program to illustrate the use of Constructors and Destructors (use the above program.) 
//c) Write a program for illustrating function overloading in adding the distance between objects (use the above problem) 
//d). Write a C++ program demonstrating a Bank Account with necessary methods and variables
 
#include<iostream>
using namespace std;


class distance
{
	public:
	int feet;
	int inches;
	
	distance()
	{
		this->feet=11;
		this->inches=11;
	}

	void gets()
	{
		cout<<"enetr the feet";
		cin>>feet;
		cout<<"\n Enter the inches";
		cin>>inches;
	}
	void out()
	{
		cout<<feet<<ends<<inches<<endl;
	}
	
	void print()
	{
		cout << feet << ends << inches ;
	}
	
	//distance()

	

};
int sum (class distance a,class distance b)
{
	cout<<a.feet+b.feet<<endl;
	cout<<a.inches+b.inches;
}


int main()
{
	class distance d1,d2;
//	d1.gets();
//	d1.out();
//	d2.gets();
//	d2.out();
	sum(d1,d2);
	return 0;
}
