#include<iostream>
using namespace std;
class train
{
	public:
		string tname;
		int avail;
		
};
int check(train t[])
{
	
}
int main()
{
	//vskp 120 akd 100 tuni 70 anvrm 60 samakl 50 rjv 40 tdd 30 elr 20 nzd 10
	class train t[9];
	int total=500;
	for(int i=0;i<9;i++)
	{
		cout<<"Enetr the name of the train";
		cin>>t[i].tname;
		cout<<"Enetr the available seats ";
		cin>>t[i].avail;
	}
		for(int i=0;i<9;i++)
	{
		cout<<t[i].tname<<ends;
		cout<<t[i].avail<<endl;
	}
	int choice=1;
	
	cout<<"Eneter 1 to book tickets and 0to EXIT";
	cin>>choice;
	while(choice==1)
	{
		cout<<"Eneter 1 to book tickets and 0to EXIT";
		cin>>choice;
		int flag=0, j=0,k=0,r;
		while(flag!=1)
		{
		cout<<"Enetr the initial station"<<ends;
		string initial;
		cin>>initial;
		cout<<initial<<endl;
		cout<<"Enetr the destiny station"<<endl;
		string destiny;
		cin>>destiny;
		cout<<destiny<<endl;
		for(j=0;j<9;j++)
		{
			if(t[j].tname==initial)
			{	cout<<"Yes";
				for(k=j;k<9;k++)
				{
					if(t[k].tname==destiny)
					{cout<<"OH YEAH"<<endl;
						flag=1;
						r=k;
					}
				}
				if(flag==0)
				{
					cout<<"enetr the correct destiny"<<endl;
					break;
				}
				else
				{
					cout<<"Enter the no of tickets"<<ends;
					int noof;
					cin>>noof;
					if(t[j].avail>=noof)
					{
						t[j].avail=t[j].avail-noof;
						t[r].avail=t[r].avail+noof;
					
						for(int i=0;i<9;i++)
	{
		cout<<t[i].tname<<ends;
		cout<<t[i].avail<<endl;
		
	}
	break;
}
				}
			}
			
		}
			
	}
	

		
		
	}
	
}
