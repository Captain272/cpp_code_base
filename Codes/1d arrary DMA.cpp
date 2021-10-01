#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Array size";
	cin>>n;
	int *p = new int[n];
	if(p==NULL)
	{      
		cout<<"Insufficient memory";
	}    
	cout<<"Enter Array elements :"<<endl;
	for(int i=0;i<n;i++)    
	{     
		cin>>p[i] ;  //or  cin>>(p+i);    
	}   
	cout<<"Array elements are:"<<endl;   
	for(int i=0;i<n;i++)    
	{     
	cout<<p[i] <<ends; //or  cout<<*(p+i);    } }
	
}
}
