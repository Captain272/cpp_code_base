/*In a company, there are n number of employees are working. The record of employee contains name, salary, experience, annual performance 
(Excellent, Very good, Good, Average or Poor) and address. As a part of annual increments, company would like to provide hikes as follows:

if experience is more than 10 years and performance is Excellent, 50% of basic as increment.

if experience is more than 10 years and performance is Very good or Good/ if experience is 5-10 years and performance is Excellent, 
30% of basic as increment.

if experience is more than 10 years and performance is Average/ if experience is 5-10 years and performance is Very good or good/ if 
experience is 2-3 years and performance is Excellent, 10% of basic as increment.

Remaining all cases no increment.
Implement the following in C++:
1. Read 'n' no. of employees' records and print them.
2. After increments, find the highest and lowest salary paid employees whose performance is Excellent. If there is a tie in salaries, 
break it based alphabetical order of their names. 
3. Delete the highest and second highest paid employees' records whose performance is Poor.*/
#include<iostream>
#include<cstring>
using namespace std;
int five(int sal);
int thr(int sal);
int te(int sal);
struct student
{
	int salary;
	int experience;
	string name;
	char performance;
	string address;
};
int main()
{
	int n;
	cout<<"enter the no employees";
	cin>>n;
	//struct student st[n];
	struct student* ar= new struct student [n];
	for(int i=0;i<n;i++)
	{
		cout<<"enter the salry of the " << i<< " emplyee";
		cin>>ar[i].salary;
		cout<<"enter the name";
		cin>>ar[i].name;
		cout<<"enter the expirience";
		cin>>ar[i].experience;
		cout<<"experince in Excellent(E), Very good(V), Good(G), Average(A) or Poor(P)";
		cin>>ar[i].performance;
		cout<<"enter the adress";
		cin>>ar[i].address;
		
	}
	for(int i=0;i<n;i++)
	{
		cout<<endl<<"salary        "<<ends<<"name           "<<ends<<"address          "<<ends<<"experience              "<<ends<<"perfornamance"<<endl;
		cout<<ar[i].salary<<ends;
		cout<<"         "<<ar[i].name<<ends;
		cout<<"            "<<ar[i].address<<ends;
		cout<<"            "<<ar[i].experience<<ends;
		cout<<"                         "<<ar[i].performance<<ends;
		cout<<endl;
	}
	//if experience is more than 10 years and performance is Excellent, 50% of basic as increment.
	for(int j=0;j<n;j++)
	{
		if (ar[j].performance=='E' && ar[j].experience>10)
		{
		    ar[j].salary=five(ar[j].salary);
		}
		
	
	//if experience is more than 10 years and performance is Very good or Good/ if experience is 5-10 years and performance is Excellent, 
    //30% of basic as increment.
		else if (ar[j].experience>10 && (ar[j].performance=='V'|| ar[j].performance=='G'))
		{
			ar[j].salary=thr(ar[j].salary);
			//cout<<ar[j].salary;
		}
		else if (((ar[j].experience<10)||(ar[j].experience>5))&& (ar[j].performance=='E'))
		{
			ar[j].salary=thr(ar[j].salary);
		}
		
	
	//if experience is more than 10 years and performance is Average/ if experience is 5-10 years and performance is Very good or good/ if 
	//experience is 2-3 years and performance is Excellent, 10% of basic as increment.
			else if (ar[j].experience>=10 && ar[j].performance=='A')
			{
				ar[j].salary=te(ar[j].salary);
				
			}
			else if ((ar[j].experience<10)||(ar[j].experience>5) && (ar[j].performance=='V')|| (ar[j].performance=='G'))
			{
				ar[j].salary=te(ar[j].salary);
			}
			else if ((ar[j].experience<3)||(ar[j].experience>2) && (ar[j].performance=='E'))
			{
				ar[j].salary=te(ar[j].salary);
			}
	}
	int i=0;
//	for(i=0;i<n;i++)
//	{
//		cout<<endl<<"salary        "<<ends<<"name           "<<ends<<"address          "<<ends<<"experience              "<<ends<<"perfornamance"<<endl;
//		cout<<ar[i].salary<<ends;
//		cout<<"         "<<ar[i].name<<ends;
//		cout<<"            "<<ar[i].address<<ends;
//		cout<<"            "<<ar[i].experience<<ends;
//		cout<<"                         "<<ar[i].performance<<ends;
//		cout<<endl;
//	}
	//find the highear and lowear salary paid employees whose performance is Excellent. If there is a tie in salaries, 
    //break it based alphabetical order of their names. 8 1000000 yash 20 E asdf 10000 abhi 20 E asdf 100 shiva 20 E asdf 10 ashok 20 E asdf 1000000 yash1 20 P asdf 10000 abhi2 20 P asdf 100 shiva1 20 E asdf 10 ashok 20 G asdf
	int high=0,low=ar[0].salary,hI=-1,lI=-1;
	char namu[10];
	i=0;
	for(i=0;i<n;i++)
	{
		if (ar[i].performance=='E')
		{
			if(high<ar[i].salary)
			{
				high=ar[i].salary;
				hI=i;
			}
			else if(low>ar[i].salary)
			{
				low=ar[i].salary;
				lI=i;
			}
			
		}
	}
	cout<<hI<<lI;
//		int k=0;
//	for(int i=0;i<n;i++)
//	{
//	if (ar[hI].salary==ar[i].salary)
//	{
//	
//		if(ar[hI].name[i]>ar[i].name[i])
//			{
//		    	k=i;
//			}
//			
//	}
//}
//	
//	cout<<endl<<ar[hI].name[i]<<ends<<ar[i].name[i];		
//		//	char m[10],n[10];
//		//	m=ar[hI].name;
//		//	n=ar[i].name;
//		//	k=strcmp(m,n);
//			if (k!=0)
//			{
//				hI=k;
//			}
		cout<<ar[hI
		].name<<endl;
//		i=0;
//	for(i=0;i<n;i++)
//	{
//		cout<<endl<<"salary        "<<ends<<"name           "<<ends<<"address          "<<ends<<"experience              "<<ends<<"perfornamance"<<endl;
//		cout<<ar[i].salary<<ends;
//		cout<<"         "<<ar[i].name<<ends;
//		cout<<"            "<<ar[i].address<<ends;
//		cout<<"            "<<ar[i].experience<<ends;
//		cout<<"                         "<<ar[i].performance<<ends;
//		cout<<endl;
//	}
			
			
	//3. Delete the highear and second highear paid employees' records whose performance is Poor.
	int b=0;
	int k=0;
	for(b=0;b<2;b++)
	{
	
	
	int phi=0,hi;
	i=0;
	for(int i=0;i<n;i++)
	{
		if (ar[i].performance=='P')
		{
			if(phi<ar[i].salary)
			{
				phi=ar[i].salary;
				hi=i;
			}
		}
		
	}
	cout<<endl<<phi<<hi;
	k=0;


	for(int k=hi;k<n-1;k++)
	{
		ar[k]=ar[k+1];
		ar[k].salary=ar[k+1].salary;
		ar[k].name=ar[k+1].name;
		ar[k].address=ar[k+1].address;
		ar[k].experience=ar[k+1].experience;
		ar[k].performance=ar[k+1].performance;
	}

}
    i=0;
	for(i=0;i<n-2;i++)
	{
		cout<<endl<<"salary        "<<ends<<"name           "<<ends<<"address          "<<ends<<"experience              "<<ends<<"perfornamance"<<endl;
		cout<<ar[i].salary<<ends;
		cout<<"         "<<ar[i].name<<ends;
		cout<<"            "<<ar[i].address<<ends;
		cout<<"            "<<ar[i].experience<<ends;
		cout<<"                         "<<ar[i].performance<<ends;
		cout<<endl;
	}


	


	
	
	
	
}



int five( int sal)
{
	sal=sal+(sal/2);
	return sal;
}
int thr(int sal)
{
	sal=sal+(sal*(0.3));
	cout<<3/10;
	return sal;
}
int te(int sal)
{
	sal=sal+(sal*(0.1));
	return sal;
}





