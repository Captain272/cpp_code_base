#include<iostream>
using namespace std;
class num
{
int a,b,c,d;
public:
void input();
void show();
friend num operator *(num n1,int n);
};
void num::show()
{
cout<<"A="<<a<<ends<<"B="<<b<<ends<<"C="<<c<<ends<<"D="<<d<<endl;
}
void num::input()
{
cout<<"\nEnter numbers=";
cin>>a>>b>>c>>d;
}
num operator *(num t,int a)
{
num temp;
temp.a=a*t.a;
temp.b=a*t.b;
temp.c=a*t.c;
temp.d=a*t.d;
return temp;
}
int main()
{
num x,y;
int a=5;
cout<<"\n Object x=";
x.input();
y=x*a; // here a is integer type and x is class type, operation done with different
cout<<"X:"; //types
x.show();
cout<<"Y:";
y.show();
}

