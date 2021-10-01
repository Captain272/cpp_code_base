#include<iostream>
using namespace std;

class student{
	string name;
	int roll;
	public:
		void input(int roll,string name)
		{
			this->roll=roll;
			this->name=name;
		}
		void output()
		{
			cout<<this->roll<<ends;
			cout<<this->name<<endl;
		}
	friend void swap(student&,student&);//Or we can use:- friend void swap(student*,student*);Condition
};

void swap(student &s,student &n)//If we use the above condition:-void swap(student *s,student *n)
{
	student st;
	st=s;//if condition:-st=*s;
	s=n;//*s=*n;
	n=st;//*n=st
//	return(n,s);
}

int main(){
	student st[9];
	string name[9]={"a","b","c","d","e","f","j","k","l"};
	for(int i=0;i<9;i++)
	{
		st[i].input(i,name[i]);
	}
	cout<<"Before swap"<<endl;
	for(int i=0;i<9;i++)
	{
//		cout<<"____________________"<<endl;
		st[i].output();
	}
	cout<<"Enter the no.of swaps";
	int s;
	cin>>s;
	for (int i=0;i<s;i++)
	{
		int f,s;
		cout<<"Enter the Indexs to swap:-"<<endl;
		cout<<"First one:-";
		cin>>f;
		cout<<"Second one";
		cin>>s;
		swap(st[f],st[s]);//If condtion:-swap(&st[f],&st[s])
		cout<<"Swap done!!!!"<<endl;
	}
	
	cout<<"After swap"<<endl;
		for(int i=0;i<9;i++)
	{
		st[i].output();
	}

	
	
	
}
