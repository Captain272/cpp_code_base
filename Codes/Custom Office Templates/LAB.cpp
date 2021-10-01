#include<iostream>
using namespace std;
int perfect(int);
int palan(int);
int fibon(int);
int bubble(int);
int main()
{
	int k,j,i,arr[1000],n,pal=0,fib=0,per=0,gift[1000],x=0,temp;
	cout<<"enter the no of employes";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(j=0;j<n;j++)
	{
		cout<<arr[i];
	}
	cout<<endl;
	for(k=0;k<n;k++)
	{
		pal=palan(arr[k]);
		fib=fibon(arr[k]);
		per=perfect(arr[k]);
		if(pal==1||fib==1||per==1)
		{
			arr[k]=gift[x];
			x++;
		}
	}
	temp=gift[0];
	for(i = 0; i<10; i++) {
   		for(j = i+1; j<10; j++)
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
	while(gift[i]!='\0')
	{
		cout<<gift[i];
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
		cout<<"it is a perfect";
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
			cout<<"it is a finoic no";
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
		cout<<"it is a panamdrome";
		return 1;
	}
}
