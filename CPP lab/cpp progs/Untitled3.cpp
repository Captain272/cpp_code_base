#include<iostream>
using namespace std;


class dis
{
	public:
		int feet;
		int inch;
	
		void get()
		{
			cin>>feet;
			cin>>inch;
		}
		
		void get(dis x,dis y,dis z)
		{
			z.feet=x.feet+y.feet;
			z.inch=x.inch+y.inch;
			cout<<"Sum of distances"<< endl<<x.inch+y.inch;
			cout<<ends<<x.feet+y.feet;
			
			
		}
		
		distance(dis x,dis y)
		{
			feet=x.feet+y.feet;
			inch=x.inch+y.inch;
			
		}


		void print()
		{
			cout<<feet<<ends;
			cout<<inch<<endl;
		}
		
};






int main()
{
	int feet,inches;
	dis d1,d2,d3;
	cout<<"enter the first distance feet and inches \n";
	d1.get();
	cout<<"enter the second distance feet and inches \n";
	d2.get();
	d3.get(d1,d2,d3);
	//class distance d4(d1,d2);
	d1.print();
	d2.print();
	d3.print();
	
	return 0;
	
}
