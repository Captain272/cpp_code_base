#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char arr[100];
	int a,b=0,count=0,i=0;
	cout<<"enter the string";
	cin>>arr;
	while(arr[b]!='\0')
	{
		count++;
		b++;
	}
	cout<<count<<arr<<strlen(arr);
	b=0;
	int f =0;
	for(b=0;arr[b]!='\0';b++)
	{
		if(arr[b] != arr [count])
		{
			i++;
		}
		--count;
		cout<<"f is "<<f<<endl;
		cout<<endl<<arr[b]<<arr[count]<<endl;
		
	}
	if (i==0)
	{
		cout<<"not palandrome";
	}
	else
	{
		cout<<"plandrome";
	}
}

