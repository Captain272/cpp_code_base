#include<iostream>
using namespace std;
class outer
{
	public:
	class inner
	{
		public:
			int hi=5;
	};
};
int main()
{
	outer ot;
	cout<<outer::inner::hi;
	//cout<<ot.jio.hi;
}
