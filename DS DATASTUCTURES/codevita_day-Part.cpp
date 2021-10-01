#include<iostream>
using namespace std;

int prime(int n)
{
    if (n == 1) 
	{
        return 0;
    }

    int i = 2;
    while (i*i <= n) 
	{
        if (n % i == 0) 
		{
            
            return 0;
        }
        i += 1;
    }
    return n;
}
int main()
{
	int count=0,num=0;
	int d,p;
	cin>>d;
	cin>>p;
	if(d%p==0)
	{
		for (int i=1;i<d;i++)
		{count=0;
			if(prime(i))
			{
				for(int j=i;j<d;j=j+12)
				{
					if(prime(j))
					{
						count++;
					}
					
					if(count==p)
					{
						num++;
					}	
					
					
				}
				
			}
		}
		
	cout<<num;}
}
