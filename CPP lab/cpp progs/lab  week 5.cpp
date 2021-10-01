#include<iostream>
using namespace std;
class distance;
class distance
{
	public:
	int feet;
	int inch;
	
		int get()
		{
			cin>>feet;
			cin>>inch;
		};
		void get(distance x,distance y,distance z)
		{
			z.feet=x.feet+y.feet;
			z.inch=x.inch+y.inch;
			cout<<"Sum of distances"<< endl<<x.inch+y.inch;
			cout<<ends<<x.feet+y.feet;
			
			
		}
		distance(distance x,distance y)
		{
			this->feet=x.feet+y.feet;
			this->inch=x.inch+y.inch;
//			cout<<"Sum of distances"<< endl<<x.inch+y.inch;
//			cout<<ends<<x.feet+y.feet;
//			
		};
//		distance get(distance x)
//		{
//			cout<<x.feet;
//			cout<<x.inch;
//		}
		void print()
		{
			cout<<feet<<ends;
			cout<<inch<<endl;
		}
};
int main()
{
	int feet,inches;
	distance d1,d2,d3;
	cout<<"enter the first distance feet and inches \n";
	d1.get();
	cout<<"enter the second distance feet and inches \n";
	d2.get();
	d3.get(d1,d2,d3);
	class distance d4(d1,d2);
	d1.print();
	d2.print();
	d4.print();
	
	
}
