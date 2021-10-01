#include<iostream>
using namespace std;
class A
{
private:
int x;
//A()
//{
//cout<<"In constructor...";
//x=24;
//}
//~A()
//{
//cout<<endl<<"x="<<x;
//cout<<"In destructor....";
//}
public:
A()
{
cout<<"In constructor...";
x=24;
}
~A()
{
cout<<endl<<"x="<<x;
cout<<"In destructor....";
}
void show()
{
A();
cout<<endl<<"x="<<x;
this->A::~A();
}
};
int main()
{
A a;
//a->show();
} 
