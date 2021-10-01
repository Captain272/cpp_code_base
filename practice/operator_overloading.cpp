#include<iostream>
using namespace std;

class opp{
	int a;
	int b;
	public:
		void operator++();
		void operator++(int);
		void show();
};
void opp::operator++(){
	++a;
}

void opp::operator++(int){
	cout<<"post"<<endl;
	a++;
}

void opp::show(){
	cout<<a<<endl;
}
int main(){
	opp p;
	p.operator++();
	p.operator++();
	p.show();
	++p;
//	p++;
	p.show();
	
}
