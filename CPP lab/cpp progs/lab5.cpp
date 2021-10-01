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
	string branch;
	string name;
	int rollno;
	int  mt1;
	int mt2;
	int mt3;
	int endsem;
	int percentage;
};
void update(int roll,string branch,int a,struct student* arr,int k)
{
	for(int i=0;i<a;i++)
	{
		if((arr[i].rollno==roll) && (arr[i].branch==branch))
		{
			string names;
			cout << "Enter Updated Name:" ;
			cin >> names;
			arr[i].name=names;
		}
	}
	for(int j=0;j<a;j++)
	{
	cout<<"name"<<arr[j].name<<endl;
	cout<<"roll"<<arr[j].rollno<<endl;
	cout<<"mt1 marks"<<arr[j].mt1<<endl;
	cout<<"mt2"<<arr[j].mt2<<endl;
	cout<<"mt3"<<arr[j].mt3<<endl;
	cout<<"end sem"<<arr[j].endsem<<endl;
	cout<<"percentage"<<arr[j].percentage<<endl;
	}
	
}
int update(int roll,string branch,int a,struct student* arr)
{
	for(int i=0;i<a;i++)
	{
		cout<<"HELLO For";
		if(arr[i].rollno==roll && arr[i].branch==branch)
		{
			int mt1,mt2,mt3;
			cin>>mt1;
			cin>>mt2;
			cin>>mt3;
			arr[i].mt1=mt1;
			arr[i].mt2=mt2;
			arr[i].mt3=mt3;
			
		}
	}
	
	
	for(int j=0;j<a;j++)
	{
	cout<<"name"<<arr[j].name<<endl;
	cout<<"roll"<<arr[j].rollno<<endl;
	cout<<"mt1 marks"<<arr[j].mt1<<endl;
	cout<<"mt2"<<arr[j].mt2<<endl;
	cout<<"mt3"<<arr[j].mt3<<endl;
	cout<<"end sem"<<arr[j].endsem<<endl;
	cout<<"percentage"<<arr[j].percentage<<endl;
	}
	
}
void update(string name,string branch,int a,struct student* array)
{
	for(int i=0;i<a;i++)
	{
		if(array[i].name==name && array[i].branch==branch)
		{int r;
		cin>>r;
		
		array[i].rollno=r;
				for(int j=0;j<a;j++)
	{
	cout<<"name"<<array[j].name<<endl;
	cout<<"roll"<<array[j].rollno<<endl;
	cout<<"mt1 marks"<<array[j].mt1<<endl;
	cout<<"mt2"<<array[j].mt2<<endl;
	cout<<"mt3"<<array[j].mt3<<endl;
	cout<<"end sem"<<array[j].endsem<<endl;
	cout<<"percentage"<<array[j].percentage<<endl;
	}
}
}
}

int percentage(int mts,int end)
{
	int result=0;
	result=(mts+end);
	cout<<result<<endl;
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
	
//	struct student CSE;
//	struct student ECE;
//	struct student MECH;
//	struct student CIVIL;
//	
	cout<<"Enter the no.of students";
	int a;
	cin>>a;
//	cin>>b;
//	cin>>c;
//	cin>>d;
	struct student* ar= new struct student [a];
//	struct ECE* ar= new struct ECE [b];
//	struct MECH* ar= new struct MECH [c];
//	struct CIVIL* ar= new struct CIVIL [d];
	cout<<"Enter the details of all students";
	for(int i=0;i<a;i++)
	{
		cout<<"Enter the branh";
		cin>>ar[i].branch;
		cout<<"Enter the name";
		cin>>ar[i].name;
		cout<<"Enter the Roll";
		cin>>ar[i].rollno;
		cout<<"Enter the mt-1";
		cin>>ar[i].mt1;
		cout<<"Enter the mt-2";
		cin>>ar[i].mt2;
		cout<<"Enter the mt-3";
		cin>>ar[i].mt3;
		cout<<"Enter the endsem marks";
		cin>>ar[i].endsem;
		cout<<"percentage";
		int best=btmt(ar[i].mt1,ar[i].mt2,ar[i].mt3);
		ar[i].percentage=percentage(best,ar[i].endsem);
		cout<<ar[i].percentage;
	}
//	cout<<"Enter the details of ECE students";
//	for(int i=0;i<b;i++)
//	{
//		cout<<"Enter the name";
//		cin>>ECE[i].name;
//		cout<<"Enter the Roll";
//		cin>>ECE[i].rollno;
//		cout<<"Enter the mt-1";
//		cin>>ECE[i].mt1;
//		cout<<"Enter the mt-2";
//		cin>>ECE[i].mt2;
//		cout<<"Enter the mt-3";
//		cin>>ECE[i].mt3;
//		cout<<"Enter the endsem marks";
//		cin>>ECE[i].endsem;
//		cout<<"percentage";
//		int best=btmt(ECE[i].mt1,ECE[i].mt2,ECE[i].mt3);
//		ECE[i].percentage=percentage(best,ECE[i].endsem);
//		
//	}
//	cout<<"Enter the details of MECH students";
//	for(int i=0;i<c;i++)
//	{
//		cout<<"Enter the name";
//		cin>>MECH[i].name;
//		cout<<"Enter the Roll";
//		cin>>MECH[i].rollno;
//		cout<<"Enter the mt-1";
//		cin>>MECH[i].mt1;
//		cout<<"Enter the mt-2";
//		cin>>MECH[i].mt2;
//		cout<<"Enter the mt-3";
//		cin>>MECH[i].mt3;
//		cout<<"Enter the endsem marks";
//		cin>>MECH[i].endsem;
//		cout<<"percentage";
//		int best=btmt(MECH[i].mt1,MECH[i].mt2,MECH[i].mt3);
//		MECH[i].percentage=percentage(best,MECH[i].endsem);
//		
//	}
//	cout<<"Enter the details of CIVIL students";
//	for(int i=0;i<d;i++)
//	{
//		cout<<"Enter the name";
//		cin>>CIVIL[i].name;
//		cout<<"Enter the Roll";
//		cin>>CIVIL[i].rollno;
//		cout<<"Enter the mt-1";
//		cin>>CIVIL[i].mt1;
//		cout<<"Enter the mt-2";
//		cin>>CIVIL[i].mt2;
//		cout<<"Enter the mt-3";
//		cin>>CIVIL[i].mt3;
//		cout<<"Enter the endsem marks";
//		cin>>CIVIL[i].endsem;
//		cout<<"percentage";
//		int best=btmt(CIVIL[i].mt1,CIVIL[i].mt2,CIVIL[i].mt3);
//		CIVIL[i].percentage=percentage(best,CIVIL[i].endsem);
//		
//	}
	int kick=100;
	while(kick!=0)
	{
	cout<<"TO DISPLAY THE DETAILS OF 1)CSE 2)ECE 3)MECH 4)CIVIL 0)EXIT";
	cin>>kick;
	if(kick==1)
	{
		for(int j=0;j<a;j++)
	{
	cout<<"name"<<ar[j].name<<endl;
	cout<<"roll"<<ar[j].rollno<<endl;
	cout<<"mt1 marks"<<ar[j].mt1<<endl;
	cout<<"mt2"<<ar[j].mt2<<endl;
	cout<<"mt3"<<ar[j].mt3<<endl;
	cout<<"end sem"<<ar[j].endsem<<endl;
	cout<<"percentage"<<ar[j].percentage<<endl;
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
}
int up=0;
struct student cse;
cin>>up;

while(up!=0)
{
	int roll;
	string branch,name;
	cout<<endl<<"To update 1)name-roll/branch  2)roll-name/branch 3)marks-roll/branch";
	cin>>up;
	if(up==1)
	{ int k;
		cin>>roll>>branch;
		update(roll,branch,a,ar,k);
	}
	else if(up==2)
	{
		cin>>name>>branch;
		update(name,branch,a,ar);
	}
	else if(up==3)
	{
		cin>>roll>>branch;
		cout << " up = 3 " ;
		update(roll,branch,a,ar);
	}
	
}
		for(int j=0;j<a;j++)
	{
	cout<<"name"<<ar[j].name<<endl;
	cout<<"roll"<<ar[j].rollno<<endl;
	cout<<"mt1 marks"<<ar[j].mt1<<endl;
	cout<<"mt2"<<ar[j].mt2<<endl;
	cout<<"mt3"<<ar[j].mt3<<endl;
	cout<<"end sem"<<ar[j].endsem<<endl;
	cout<<"percentage"<<ar[j].percentage<<endl;
	}


}

