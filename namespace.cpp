//Assinement--1
#include<iostream>
using namespace std;

namespace outer{
//	int x()
//	{
//	return 5;	
//	}This thing returns 5
//NOW NESTED THING
int x=15;
namespace in{
	int y=20;
	namespace innner{
		int z=25;
	}
}
}

namespace second{
	int sec=12;
	namespace second_inner{
		int sec2=24;
	}
}

void multiplication(){
	cout<<"outer:-"<<::outer::x*::second::sec<<endl;
	cout<<"inner:-"<<::outer::in::y*::second::sec<<endl<<endl;
}

void division(){
	cout<<"outer:-"<<::outer::x/::second::sec<<endl;
	cout<<"inner:-"<<::outer::in::y/::second::sec<<endl<<endl;
}

void add(){
	cout<<"outer:-"<<::outer::x+::second::sec<<endl;
	cout<<"inner:-"<<::outer::in::y+::second::sec<<endl<<endl;
}


void sub(){
	cout<<"outer:-"<<::outer::x-::second::sec<<endl;
	cout<<"inner:-"<<::outer::in::y-::second::sec<<endl<<endl;
}


void unary(){
	cout<<"outer:-"<<++::second::sec<<endl;
	cout<<"inner:-"<<::outer::in::y++<<endl;
}

void relational(){
	if(::outer::x<=::second::sec)
	{
		cout<<"First namespace outer is less than equal to second one"<<endl;
	}
	else
	{
		cout<<"Second namespace is less"<<endl;
	}
}



int main()
{
	cout<<"First Question:-Namespace in nested form->"<<endl;
	cout<<"This thing is the outer one :-"<<::outer::x<<endl;
	cout<<"This is the first layer :-"<<::outer::in::y<<endl;
	cout<<"This is the last layer :-"<<::outer::in::innner::z<<endl;
	cout<<"Second Question:-Operators in namespace->"<<endl<<endl;
	cout<<"Arthimatic binary operators"<<endl;
	cout<<"Multiplication"<<endl;
	multiplication();
	cout<<"Division"<<endl;
	division();
	cout<<"Addition"<<endl;
	add();
	cout<<"Subtraction"<<endl;
	sub();
	cout<<"Arthimatic unary operator"<<endl;
	unary();
	cout<<"relational Operators"<<endl;
	relational();
	cout<<"Lot more operators...............";
	
}
