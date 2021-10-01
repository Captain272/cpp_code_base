#include<iostream>
#include "Myclass.h"
using namespace std;
//Myclass::Myclass(int as)
//:a(as)
//{	
//	cout<<"Yo bro its constraucted"<< a <<endl;
//}
//
//Myclass::~Myclass()
//{
//	cout<<"\ndestructed";
//}
//int main()
//{
//	Myclass ob(889988);
////	Myclass *ptr = &ob;
////	cout<<*ptr->a;
//	//cout<<ob.a;
//}
int main()
{
	string str = "hello";

try {
  int motherAge = 29;
  int sonAge = 36;
  if (sonAge > motherAge) {
   throw 99;
  }
} 
catch (int x) {
  cout<<"Wrong age values - Error "<<x;
}


}//Outputs "Wrong age values - Error 99"
