//Write a menu driven C++ program to implement the following modules for the banking system. 
//1.  Read n no.of customers profile.
//2. Deposit a specific amount into the account.
//3. Withdrawal a specific amount from the account. 
//4. Check balance to display available amount in the account. 
//5. Update profile like updating contact, name, address, etc.
//6. Display the financial status of the bank.
//  . No of customers 
//  . Total amount available 
//  . Total balance amount = total amount available + Total deposited amount- Total withdrawal amount 
//  .  Total deposited amount 
// . Total withdrawal amount 
//
//Note: Use class, static, and friend concepts.  You will be given Extra marks if you use operator overloading concepts. 
#include<iostream>
using namespace std;
class bank;
class cust;
class cust
{
	public:
	int accountno;
	string name;
	int contact;
	string address;
	int amount;
	friend void displays(cust ct);
};
static class bank
{
	public:
		int noofcos;
		int amount;
		int balance;
		int with;
		int dep;
		friend void display(bank bk);
		
	
		
}bk;
void dispaly(bank bk)
{
	cout<<"The initial amount of th ebank :"<<bk.amount<<endl;
	cout<<"The balance amount of th ebank :"<<bk.balance<<endl;
	cout<<"The no of the customers the ebank :"<<bk.noofcos<<endl;
	cout<<"The deposite amount of the ebank :"<<bk.dep<<endl;
	cout<<"The withdrawl amount of th ebank :"<<bk.with<<endl;
	
}
void displays(cust t)
{
		cout<<"Account No. :"<<t.accountno<<endl;
	cout<<"Name of the accountant :"<<t.name<<endl;
	cout<<"AMOUNT :"<<t.amount<<endl;
	cout<<"Address :"<<t.address<<endl;
	cout<<"contact :"<<t.contact<<endl;
	
}
int main()
{
	cout<<"Enter the no of coustemers"<<endl;
	int n;
	cin>>n;
	cust hi[n];
	cout<<"Enter the initial amount of the bank"<<endl;
	int r;
	cin>>r;
	
	bk.amount=r;
	bk.balance=bk.amount;
	bk.noofcos=n;
	bk.dep=0;
	bk.with=0;
	for(int i=0;i<n;i++)
	{
		cout<<"Enter the account no  :\n";
		cin>>hi[i].accountno;
		cout<<"Enetr the name  :\n";
		cin>>hi[i].name;
		cout<<"Eneetr the address  :\n";
		cin>>hi[i].address;
		cout<<"Enter the amount  :\n";
		cin>>hi[i].amount;
		bk.balance=bk.balance+hi[i].amount;
		bk.dep=bk.dep+hi[i].amount;
		cout<<"Enter the contact no  :\n";
		cin>>hi[i].contact;
	}

int choice=0;
cout<<"Enter any no to continue and 1 to EXIT:  \n";
while(choice!=1)
{
	cout<<"1)Bank status  2)cutomers list and details 3)  personal account ";
	int a;
	cin>>a;
	if(a==1)
	{
		display(bk);
	}
	if(a==2)
	{
		for(int i=0;i<n;i++)
	{
	
		displays(hi[i]);
	}
	}
	if(a==3)
	{
		cout<<"Enetr the Acc No.";
		int ac,flag=0,j;
		cin>>ac;
		while(flag!=1)
		{
		for(j=0;j<n;j++)
		{
			if(ac==hi[j].accountno)
			{
				flag=j;
				break;
			}
			else
			{
				cout<<"Enter the correct acc no. : or enter 1 to exit\n";
			}
		}
		
			}
		
	
	
		//1.  Read n no.of customers profile.
//2. Deposit a specific amount into the account.
//3. Withdrawal a specific amount from the account. 
//4. Check balance to display available amount in the account. 
//5. Update profile like updating contact, name, address, etc.
int c=0;
while(c!=1)
{

		if(flag==j)
		{
			cout<<"1)Deposit\t2)withdrawl\t3)Balance4)bank quiery\t5)My profile\t6)Exit";
			int ji;
			if(ji==1)
			{
				cout<<"Enete the amount to be deposited  :";
				int d;
				cin>>d;
				hi[j].amount=hi[j].amount+d;
				bk.dep=bk.dep+d;
				bk.balance+=d;
				
			}
			else if(ji==2)
			{
				cout<<"Enete the amount to be deposited  :";
				int d;
				cin>>d;
				if(hi[j].amount>=1000)
				{
				hi[j].amount=hi[j].amount-d;
				bk.with=bk.with+d;
				bk.balance-=d;
			}
			else
			{
				cout<<"\nYour balane is low to withdral it must be above 1000 But your balance is"<<hi[j].amount;
			}
						}
			else if(ji==3)
			{
				cout<<"\nBalance :"<<hi[j].amount;
			}
			else if(ji==4)
			{
				display(bk);
			}
			else if(ji==5)
			{
				displays(hi[j]);
			}
			else if (ji==6)
			{
				break;
			}
			
		}
}

}
}
return 0;
}