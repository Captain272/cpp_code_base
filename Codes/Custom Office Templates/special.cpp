#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
int perfect(int);
int palan(int);
int npalan(char*,int);
int fibon(int);
struct employ
{
	int id;
	char name[100];
};
int main()
{
	int k,j,i,arr[1000],n,pal=0,fib=0,per=0,gift[1000],x=0,temp,dup[10];
	cout<<"enter the no of employes";
	cin>>n;
	struct employ s[n];
	for(i=0;i<n;i++)
	{
		cout<<"enter the id";
		cin>>s[i].id;
		cout<<"enter the name";
		cin>>s[i].name;
	}
	for(j=0;j<n;j++)
	{
		
		cout<<s[j].id<<'\t';
		cout<<s[j].name<<endl;
	}
	int npal;
	for(k=0;k<n;k++)
	{
		cout<<"size of name";
		int size;
		cin>>size;
		pal=palan(s[k].id);
		fib=fibon(s[k].id);
		per=perfect(s[k].id);
		npal=npalan(s[k].name,size);
		if(pal==1||fib==1||per==1||npal==1)
		{
			gift[x]=s[k].id;
			x++;
		}
	}
	temp=gift[0];
	for(i = 0; i<x; i++) {
   		for(j = i+1; j<x; j++)
   		{
      		if(gift[j] < gift[i]) 
			  {
         		temp = gift[i];
         		gift[i] = gift[j];
         		gift[j] = temp;
         	  }
}
}
	i=0;
	cout<<"The id of coustemer won"<<endl;
	while(i<x)
	{
		cout<<gift[i]<<'\t';
		i++;
	}
	i=0;
	int u=0,v=0;
	for(i=0;i<x;i++)
	{
		j=0;
		for(v=0;v<u;v++)
		{
			if(gift[i]==dup[v])
			{
				j++;
			}
		}
		if(j==0)
		{
			dup[u]=gift[i];
			u++;
		}
		
	}
	i=0;
	cout<<endl<<"The id of coustemer won without dup"<<endl;
	while(i<u)
	{
		cout<<dup[i]<<'\t';
		i++;
	}
	
}
	
int perfect(int a)
{
	int sum=0,i=1;
	while(i<a)
	{
		if(a%i==0)
		{
			sum=sum+i;
		}
		i++;
	}
	if(sum==a)
	{
		return 1;

}
}



int fibon(int a)
{
	int s=1,b=1,c=0;
	while(s<a)
	{
		s=b;
		b=c;
		c=s+b;
		if(a==s)
		{
			return 1;
		}
	}
}





int palan(int a)
{
	int arrr[10],i,qou,rem,j=0,count=0,d=0;
	qou=a;
	for(i=1;i<10;i++)
	{
	while(qou!=0)
	{
		rem=qou%10;
		qou=qou/10;
		arrr[i]=rem;
		count++;
	}
	
	}
	for(j=0;j<count;j++)
	{
		if(arrr[j]!=arrr[count])
		{
			d++;
		}
	}
	if(d==0)
	{
		return 1;
	}
}
int npalan(char* s,int size)
{
	int arrr[10],i,j=0,count=0,d=0,h=0;
	while(d<size)
	{
		cout<<*s;
		arrr[d]=*s;
		s++;
		d++;
		cout<<arrr[d];
		
	}
	for(j=0;j<count;j++)
	{
		if(arrr[j]!=arrr[count])
		{
			d++;
		}
	}
	if(d==0)
	{
		return 1;
	}
}
