#include<iostream>
using namespace std;

//template <typename T>
//int hello(T a){
//	cout<<a;
//}
//
//class frienf{
//	private:
//	 int a=10;
//		              
//	friend void show(frienf f);
//};
//
//void show(frienf f){
//	cout<<f.a;
//}


class binary{
	
	public:
		int a,b,c;
//		friend binary operator+(binary b1,binary b2);
		friend binary operator+(int a,binary b2);
		friend binary operator+(binary b2,int a);

};

binary operator+(binary b1,binary b2){
	binary b3;
	b3.a=b2.a+b1.a;
	b3.b=b2.b+b1.b;
	b3.c=b2.c+b2.c;
	return b3;
}


binary operator+(binary b2,int a){
	binary b3;
	b3.a=b2.a+a;
	b3.b=b2.b+a;
	b3.c=b2.c+a;
	return b3;
}

int main(){
//	cout<<"Hello World";
//	hello(1);
//	hello("b");
//	frienf f;
//	show(f);
	binary b1,b2,b3;
	b1.a=1;
	b1.b=2;
	b1.c=3;
	b2.a=1;
	b2.b=2;
	b2.c=3;
	b3=b2+1;
	cout<<b3.a<<b3.b<<b3.c;
	int test;
	cin>>test;
	try{
		if(test==0){
			throw(1);
		}
	}
	catch(int){
		cout<<"Don't Enter 0 hero";
	}

	
}
