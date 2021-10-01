//#include<iostream>
//using namespace std;
//class test
//{
//int x=10;
//int y=20;
//public:
//void show()
//{
//x++;
//y++;
//cout<<"x="<<x<<endl;
//cout<<"y="<<y;
//}
//};
//int main()
//{
//static test a,b;
//cout<<"Objet A\n";
//a.show();
//cout<<"\nObject B\n";
//b.show();
//return 0;
//}

#include<iostream>
using namespace std;
class ABC
{
public:
void display()
{
cout<<"In base class function.\n";
}
};
class XYZ: public ABC
{
public:
//void display()
//{
//cout<<"In derived class function.\n";
//}
};
int main()
{
XYZ x;
ABC a;
a.display();
x.display();
x.ABC::display();
return 0;
}

