//The exam cell management software maintains academic details of students. Assume THE FOLLOWING:
//There are students of 4 banches such as CSE, ECE, MECH,CIVIL. Each student record contains name, rollno, MT1Marks, MT2Marks, MT3Marks and EndSemMarks, percentage, where percentage is,
//percentage =(((sum of best two MT marks of three MTs) + EndSemMarks) / 100) * 100.
//Then, implement the following in C++:
//1. Read all 4 branches students and print them.
//2. Overload the upDate() and displayDetails() functions for
//            i. to update the names of specific roll numbers of a particular branch.
//            ii. to update the roll numbers of specific students (given names) of a particular branch.
//           iii. to update marks of specific roll numbers of a particular branch
//           iv. to display the details of students given a particular branch.
//          v. to display the details of students given their roll numbers of a particular branch.
#include<iostream>
using namespace std;
struct student
{
	string name;
	int rollno;
	int  mt1;
	int mt2;
	int mt3;
	int endsem;
	int percentage;
};
void update(int roll,struct student )
{
	
}
int percentage(int mts,int end)
{
	int result;
	result=((mts+end)/100)*100;
	return result;
}
int btmt(int mt1,int mt2,int mt3)
{
	int mts;
	if(mt1>=mt2 && mt1>=mt3 )
	{
		if(mt2>mt3)
		{
			mts=mt1+mt2;
		}
		else
		{
			mts=mt1+mt3;
		}
	}
	else if(mt1<=mt2 && mt1<=mt3)
	{
		mts=mt2+mt3;
	}
		if(mt2>=mt1 && mt2>=mt3 )
	{
		if(mt1>mt3)
		{
			mts=mt2+mt1;
		}
		else
		{
			mts=mt2+mt3;
		}
	}
	else if(mt2<=mt1 && mt2<=mt3)
	{
		mts=mt1+mt3;
	}
		if(mt3>=mt1 && mt3>=mt2 )
	{
		if(mt1>mt2)
		{
			mts=mt1+mt3;
		}
		else
		{
			mts=mt2+mt3;
		}
	}
	else if(mt3<=mt2 && mt3<=mt1)
	{
		mts=mt2+mt1;
	}
	return mts;
}

//void displaycse(struct CSE,int a)
//{
//	
//}
//
//}
int main()
{
	
	struct student CSE;
	struct student ECE;
	struct student MECH;
	struct student CIVIL;
	
	cout<<"Enter the no.of students in each branch";
	int a,b,c,d;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	struct student CSE* ar= new struct student [a];
	struct student ECE* ar= new struct student [b];
	struct student MECH* ar= new struct student [c];
	struct student CIVIL* ar= new struct student [d];
	cout<<"Enter the details of CSE students";
	for(int i=0;i<a;i++)
	{
		cout<<"Enter the name";
		cin>>CSE[i].name;
		cout<<"Enter the Roll";
		cin>>CSE[i].rollno;
		cout<<"Enter the mt-1";
		cin>>CSE[i].mt1;
		cout<<"Enter the mt-2";
		cin>>CSE[i].mt2;
		cout<<"Enter the mt-3";
		cin>>CSE[i].mt3;
		cout<<"Enter the endsem marks";
		cin>>CSE[i].endsem;
		cout<<"percentage";
		int best=btmt(CSE[i].mt1,CSE[i].mt2,CSE[i].mt3);
		CSE[i].percentage=percentage(best,CSE[i].endsem);
	}
	cout<<"Enter the details of ECE students";
	for(int i=0;i<b;i++)
	{
		cout<<"Enter the name";
		cin>>ECE[i].name;
		cout<<"Enter the Roll";
		cin>>ECE[i].rollno;
		cout<<"Enter the mt-1";
		cin>>ECE[i].mt1;
		cout<<"Enter the mt-2";
		cin>>ECE[i].mt2;
		cout<<"Enter the mt-3";
		cin>>ECE[i].mt3;
		cout<<"Enter the endsem marks";
		cin>>ECE[i].endsem;
		cout<<"percentage";
		int best=btmt(ECE[i].mt1,ECE[i].mt2,ECE[i].mt3);
		ECE[i].percentage=percentage(best,ECE[i].endsem);
		
	}
	cout<<"Enter the details of MECH students";
	for(int i=0;i<c;i++)
	{
		cout<<"Enter the name";
		cin>>MECH[i].name;
		cout<<"Enter the Roll";
		cin>>MECH[i].rollno;
		cout<<"Enter the mt-1";
		cin>>MECH[i].mt1;
		cout<<"Enter the mt-2";
		cin>>MECH[i].mt2;
		cout<<"Enter the mt-3";
		cin>>MECH[i].mt3;
		cout<<"Enter the endsem marks";
		cin>>MECH[i].endsem;
		cout<<"percentage";
		int best=btmt(MECH[i].mt1,MECH[i].mt2,MECH[i].mt3);
		MECH[i].percentage=percentage(best,MECH[i].endsem);
		
	}
	cout<<"Enter the details of CIVIL students";
	for(int i=0;i<d;i++)
	{
		cout<<"Enter the name";
		cin>>CIVIL[i].name;
		cout<<"Enter the Roll";
		cin>>CIVIL[i].rollno;
		cout<<"Enter the mt-1";
		cin>>CIVIL[i].mt1;
		cout<<"Enter the mt-2";
		cin>>CIVIL[i].mt2;
		cout<<"Enter the mt-3";
		cin>>CIVIL[i].mt3;
		cout<<"Enter the endsem marks";
		cin>>CIVIL[i].endsem;
		cout<<"percentage";
		int best=btmt(CIVIL[i].mt1,CIVIL[i].mt2,CIVIL[i].mt3);
		CIVIL[i].percentage=percentage(best,CIVIL[i].endsem);
		
	}
	int kick=100;
	while(kick!=0)
	{
	cout<<"TO DISPLAY THE DETAILS OF 1)CSE 2)ECE 3)MECH 4)CIVIL 0)EXIT";
	cin>>kick;
	if(kick==1)
	{
		for(int j=0;j<a;j++)
	{
	cout<<CSE[j].name;
	cout<<CSE[j].roll no;
	cout<<CSE[j].mt1;
	cout<<CSE[j].mt2;
	cout<<CSe[j].mt3;
	cout<<CSE[j].endsem;
	cout<<CSE[j].percentage;
	}
	if(kick==2)
	{
		//displayece(b);
	}
	if(kick==3)
	{
		//displaymech(c);
	}
	if(kick==4)
	{
		//displaycivil(d);
	}
	
}
