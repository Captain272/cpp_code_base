//In an Institute, assume that there are n number of teaching faculty, m number of non-teaching faculty, p number of housekeeping, q number of security 
//and s number of  students. Also, assume the following:
//Institute' available funds is Rs.100 Cr.
//Paying salary for each teaching faculty is Rs.60000 pm
//Paying salary for non-teaching faculty is Rs.20000 pm
//Paying salary for each security is Rs.10000 pm
//Paying salary for each housekeeping is Rs.10000 pm
                        //Campus monthly maintenance is Rs.5000000
//Annually institute gets say Rs 40000 as scholarship for each each.
//Implement the following in C++(use class and friend functions):
//1. Calculate and print total expenses of the institute.
//2.Calculate and print total expenses for teaching faculty.
//3. Calculate and print total expenses for non-teaching.
//4. Calculate and print total expenses for security.
//5.Calculate and print total expenses for housekeeping.
//6. Calculate and print total scholarship receivedby the institute.
#include<iostream>
using namespace std;
class teach;
class nonteach;
class security;
class housekeeing;
class student;

class teach
{	int n;
	public:
	
		getdetails(int x){
		n=x;
		n=(60000*n);
	}
		friend int expense(teach,nonteach,security,housekeeing,student);
		friend void display(teach,nonteach,security,housekeeing,student);
};
class nonteach{
	int m;
	public:	
		getdetails(int x){
		
		
		m=x;
		m=(20000*m);}
		friend int expense(teach,nonteach,security,housekeeing,student);
		friend void display(teach,nonteach,security,housekeeing,student);
};
class security{
	int p;
	public:
		getdetails(int x){
		
		p=x;
		p=(10000*p);}
		friend int expense(teach,nonteach,security,housekeeing,student);
		friend void display(teach,nonteach,security,housekeeing,student);
};
class housekeeing{
	int q;
	public:
		getdetails(int x){
		
		
		q=x;
		q=(60000*q);}
		friend int expense(teach,nonteach,security,housekeeing,student);
		friend void display(teach,nonteach,security,housekeeing,student);
};
class student{
		int s;
	public:
	
		getdetails(int x){
		
		s=x;
		s=(40000*s);}
		friend int expense(teach,nonteach,security,housekeeing,student);
		friend void display(teach,nonteach,security,housekeeing,student);
};

int  expense(teach n,nonteach m,security p,housekeeing q,student s)
{
	int expence;
	expence=n.n+m.m+p.p+q.q;
	int left;
	left=5000000+expence;
	cout<<endl<<"total expense"<<left<<endl;
	cout<<"remaining amount"<<1000000000-left;
	
	//cout<<teaching.
}
void display(teach n,nonteach m,security p,housekeeing q,student s)
{
	cout<<"Expences of teaching faculty";
	cout<< n.n<<endl;
	cout<<"Expences of non teaching faculty";
	cout<< m.m<<endl;
	cout<<"Expences of security faculty";
	cout<<  p.p<<endl;
	cout<<"Expences of housekeeping faculty";
	cout<<  q.q<<endl;
	cout<<"the scholarship got by institute every year";
	cout<<  s.s;
	
	
}
int main()
{
	teach teaching;
	int noofteachers;
	cout<<"Enter the no of teachers";
	cin>>noofteachers;
	teaching.getdetails(noofteachers);//=(noofteachers*60000);
	
	
	
	
	
	nonteach nonteaching;
	int noofnonteachers;
	cout<<"Enter the no of non teachers";
	cin>>noofnonteachers;
	nonteaching.getdetails(noofnonteachers);//=(noofnonteachers*20000);
	
	
	security secu;
	int sec;
	cout<<"Enter the no of security";
	cin>>sec;
	secu.getdetails(sec);//=(sec*10000);
	
	
	housekeeing house;
	int h;
	cout<<"Enter the no of housekeeping";
	cin>>h;
	house.getdetails(h);//=(h*10000);
	
	
	student stu;
	int s;
	cout<<"Enter the no of students";
	cin>>s;
	stu.getdetails(s);//=(s*40000);
	
	expense(teaching,nonteaching,secu,house,stu);
	cout<<endl<<"enter '1' to view details";
	int w;
	cin>>w;
	if(w==1)
	{
		display(teaching,nonteaching,secu,house,stu);
	}
	
	
	
	
	
}
