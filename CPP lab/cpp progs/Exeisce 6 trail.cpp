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
	
	//~distance();

	

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
	//d1=&d2;
	sum(d1,d2);
	return 0;
}
