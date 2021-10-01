#include<iostream>
using namespace std;
int * insert(int a[])
{
//	int l=0,i=0;
//	while(a[i]!='\0')
//	{
//		i++;
//		l++;
//	}
//	l++;
//	int b[l];
//	cout<<"Enter the element to insert";
//	int g;
//	cin>>g;
//	b[0]=g;
//	int t=0;
//	for(int j=1;j<l;j++)
//	{
//		b[j]=a[t];
//		t++;
//	}
//	for(int j=0;j<l;j++)
//	{
//		cout<<b[j];
//	}
//	return b;

int i=0;
cout<<"Enter the value to insert";
int n;
cin>>n;
while(a[i]!='\0')
{
	i++;
}
for(int j=i;j>=0;j--)
{
	a[j]=a[j+1];
	
}
a[0]=n;
return a;
}
int main()
{
	//int length;
	//cout<<"enter the length of the array\n\n\n Suggested length is 10";
	//cin>>length;
	int a[100];
	for(int i=0;i<100;i++)
	{
		a[i]='\0';
	}


	int choice;
	cout<<"Enter the choice 1)insert";
	cin>>choice;
	while(choice!=0)
	{
		cout<<"Enter the choice 1)insert 2)Display";
		cin>>choice;
	switch(choice)
{
		case(1):
		{
//			a=insert(a);
			int i=0;
cout<<"Enter the value to insert";
int n;
cin>>n;
while(a[i]!='\0')
{
	i++;
}
cout<<i;
for(int j=i;j>=0;j--)
{
	a[j+1]=a[j];
	
}
a[0]=n;
break;
	
		}
		case(2):
			{
				int k=0;
				while(a[k]!='\0')
				{
					cout<<a[k];
					k++;
				}
			
			}
	}
	
	
//	int a[]={1,2,3,4,5,6,7,8,9,0};
//	//a={1,2,3,4,5,6,7,8,9,0};
//	for(int i=0;i<length;i++)
//	{
//		cout<<a[i];
//	}
//	int a[]=insert(a);
}
	for(int i=0;i<10;i++)
	{
		cout<<a[i];
	}
	//int a[]=insert(a);
}
