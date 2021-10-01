#include<iostream>
using namespace std;

template<typename temp,class jio>
void give(temp t,jio j){
	cout<<t<<ends<<j;
}
template<class temp,class jio>
class name{
	public:
	
//	template<typename kio>
	void names(temp t,jio j){
		cout<<t<<ends<<j;
	}
};


int main(){
//	int a,*b;
//	char c='c';
//	a=5;
//	b=&a;
//	cout<<b;
	name<int,int> n;
	n.names(1,1);
	give(2,3);
}
