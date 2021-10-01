#include<iostream>
using namespace std;
class overload
{

	public:
		int hi;
		
		overload()
		{
			hi=7;
		}
		
		overload operator+(overload ov2)
		{
			 
			if(hi==ov2.hi)
			{
				cout<<"Hi";
			}
		}
};
class overload2
{
	public:
		int hi2;
		overload2()
		{
			hi2=7;
		}
};
int main()
{
overload ov,ov2;
//overload2 ov2;
//ov.add(ov2);
ov+ov2;
}
