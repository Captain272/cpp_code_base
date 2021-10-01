#include<iostream>
using namespace std;
struct student
{
       int response[10];
       int rollno;
       string name;
};
struct dis
{
      int rollno;
      string grade;

};
int main()
{
	int *ptr,n,**arr,*pt,i=0,*ar;
	//ar[10]={ 1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
	ar=new int[10];
	int k=0;
	cout<<"enter the key";
	for(k=0;k<10;k++)
	{
		cout<<"responce"<<k;
		cin>>ar[k];
	}
	cout<<"enter the no of no of students";
	cin>>n;
	struct student st[n];
	
int j;
	i=0;
	j=0;
	for(i=0;i<n;i++)
	{
		cout<<"enter name";
		cin>>st[i].name;
		cout<<"enter roll";
		cin>>st[i].rollno;
		
		for(j=0;j<10;j++)
		{
			cout<<"responce"<<j;
			cin>>st[i].response[j];
		}
	}
	int z=n,x=n,c=n,v=n;
	struct dis d[z];
	struct dis fir[x];
	struct dis sec[c];
	struct dis f[v];
	z=0;
	x=0;
	c=0;
	v=0;
	
	i=0;
	j=0;
	int count=0;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<10;j++)
		{
			
			if(st[i].response[j]==ar[j])
			{
				count++;
				cout<<count;
			}
		}
		
		if (count>=7)
		{
			d[z].grade="distiction";
			d[z].rollno=st[i].rollno;
			z++;
		}
		if(count=6)
		{
			fir[x].grade="first";
			fir[x].rollno=st[i].rollno;
			x++;
		}
		if(count=5)
		{
			sec[c].grade="second";
			sec[c].rollno=st[i].rollno;
			c++;
		}
		if(count<5)
		{
			f[v].grade="fail";
			f[v].rollno=st[i].rollno;
			v++;
		}
	}
	cout<<"which category u want";
	cout<<"1)distiction'\t'2)first'\t'3)second'\t',4)fail'\t'";
	int w;
	cin>>w;
	switch(w)
	{
		case(1):
			{
				i=0;
				for(i=0;i<z;i++)
				{
					cout<<d[i].grade<<d[i].rollno<<endl;
				}
				break;
			}
			case(2):
			{
				i=0;
				for(i=0;i<x;i++)
				{
					cout<<fir[i].grade<<fir[i].rollno<<endl;
				}
				break;
			}
			case(3):
			{
				i=0;
				for(i=0;i<c;i++)
				{
					cout<<sec[i].grade<<sec[i].rollno<<endl;
				}
				break;
			}
			case(4):
			{
				i=0;
				for(i=0;i<v;i++)
				{
					cout<<f[i].grade<<f[i].rollno<<endl;
				}
				break;
			}
	}
}




