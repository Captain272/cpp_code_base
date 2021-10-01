//Assinement-2
#include<iostream>
using namespace std;
class cse;
class ece;
class mech;
class civil;

class cse{
			int student1;
			float pass1;
			
			int student2;
			float pass2;
			
			int student3;
			float pass3;
			
			int student4;
			float pass4;
			
			public:
				cse(){
					this->student1=12;
					this->pass1=35;
					
					this->student2=13;
					this->pass2=40;
					
					this->student3=14;
					this->pass3=50;
					
					this->student4=25;
					this->pass4=60;
				}
				void cse1(){
					cout<<"CSE_1"<<endl<<"students:-"<<student1<<endl<<"pass:-"<<pass1<<endl<<endl;
				}
				
				void cse2(){
					cout<<"CSE_2"<<endl<<"students:-"<<student2<<endl<<"pass:-"<<pass2<<endl<<endl;
				}
				
				void cse3(){
					cout<<"CSE_3"<<endl<<"students:-"<<student3<<endl<<"pass:-"<<pass3<<endl<<endl;
				}
				
				void cse4(){
					cout<<"CSE_4"<<endl<<"students:-"<<student4<<endl<<"pass:-"<<pass4<<endl<<endl;
				}
				
				void branch_total_student(){
					cout<<"Total CSE students"<<student1+student2+student3+student4<<endl<<endl;
				}
				void branch_total_pass(){
					cout<<"Total pass percentage of cse"<<(pass1+pass2+pass3+pass4)/4<<endl<<endl;
				}
				friend int whole_total(cse,ece,mech,civil);
};

class ece{
			int student1;
			float pass1;
			
			int student2;
			float pass2;
			
			int student3;
			float pass3;
			
			int student4;
			float pass4;
			
			public:
				ece(){
					this->student1=12;
					this->pass1=35;
					
					this->student2=13;
					this->pass2=40;
					
					this->student3=14;
					this->pass3=50;
					
					this->student4=25;
					this->pass4=60;
				}
				void ece1(){
					cout<<"ECE_1"<<endl<<"students:-"<<student1<<endl<<"pass:-"<<pass1<<endl<<endl;
				}
				
				void ece2(){
					cout<<"ECE_2"<<endl<<"students:-"<<student2<<endl<<"pass:-"<<pass2<<endl<<endl;
				}
				
				void ece3(){
					cout<<"ECE_3"<<endl<<"students:-"<<student3<<endl<<"pass:-"<<pass3<<endl<<endl;
				}
				
				void ece4(){
					cout<<"ECE_4"<<endl<<"students:-"<<student4<<endl<<"pass:-"<<pass4<<endl<<endl;
				}
				
				void branch_total_student(){
					cout<<"Total ECE students"<<student1+student2+student3+student4<<endl<<endl;
				}
				void branch_total_pass(){
					cout<<"Total pass percentage of ece"<<(pass1+pass2+pass3+pass4)/4<<endl<<endl;
				}
				friend int whole_total(cse,ece,mech,civil);
};

class mech{
			int student1;
			float pass1;
			
			int student2;
			float pass2;
			
			int student3;
			float pass3;
			
			int student4;
			float pass4;
			
			public:
				mech(){
					this->student1=12;
					this->pass1=35;
					
					this->student2=13;
					this->pass2=40;
					
					this->student3=14;
					this->pass3=50;
					
					this->student4=25;
					this->pass4=60;
				}
				void mech1(){
					cout<<"MECH_1"<<endl<<"students:-"<<student1<<endl<<"pass:-"<<pass1<<endl<<endl;
				}
				
				void mech2(){
					cout<<"MECH_2"<<endl<<"students:-"<<student2<<endl<<"pass:-"<<pass2<<endl<<endl;
				}
				
				void mech3(){
					cout<<"MECH_3"<<endl<<"students:-"<<student3<<endl<<"pass:-"<<pass3<<endl<<endl;
				}
				
				void mech4(){
					cout<<"MECH_4"<<endl<<"students:-"<<student4<<endl<<"pass:-"<<pass4<<endl<<endl;
				}
				
				void branch_total_student(){
					cout<<"Total MECH students"<<student1+student2+student3+student4<<endl<<endl;
				}
				void branch_total_pass(){
					cout<<"Total pass percentage of mech"<<(pass1+pass2+pass3+pass4)/4<<endl<<endl;
				}
				friend int whole_total(cse,ece,mech,civil);
};


class civil{
			int student1;
			float pass1;
			
			int student2;
			float pass2;
			
			int student3;
			float pass3;
			
			int student4;
			float pass4;
			
			public:
				civil(){
					this->student1=12;
					this->pass1=35;
					
					this->student2=13;
					this->pass2=40;
					
					this->student3=14;
					this->pass3=50;
					
					this->student4=25;
					this->pass4=60;
				}
				void civil1(){
					cout<<"CIVIL_1"<<endl<<"students:-"<<student1<<endl<<"pass:-"<<pass1<<endl<<endl;
				}
				
				void civil2(){
					cout<<"CIVIL_2"<<endl<<"students:-"<<student2<<endl<<"pass:-"<<pass2<<endl<<endl;
				}
				
				void civil3(){
					cout<<"CIVIL_3"<<endl<<"students:-"<<student3<<endl<<"pass:-"<<pass3<<endl<<endl;
				}
				
				void civil4(){
					cout<<"CIVIL_4"<<endl<<"students:-"<<student4<<endl<<"pass:-"<<pass4<<endl<<endl;
				}
				
				void branch_total_student(){
					cout<<"Total CIVIL students"<<student1+student2+student3+student4<<endl<<endl;
				}
				void branch_total_pass(){
					cout<<"Total pass percentage of civil"<<(pass1+pass2+pass3+pass4)/4<<endl<<endl;
				}
				friend int whole_total(cse,ece,mech,civil);
};

int whole_total(cse c,ece e,mech m,civil ci){
	
	int cse_students=c.student1+c.student2+c.student3+c.student4;
	int cse_pass=(c.pass1+c.pass2+c.pass3+c.pass4)/4;

	int ece_students=e.student1+e.student2+e.student3+e.student4;
	int ece_pass=(e.pass1+e.pass2+e.pass3+e.pass4)/4;
	
	int mech_students=m.student1+m.student2+m.student3+m.student4;
	int mech_pass=(m.pass1+m.pass2+m.pass3+m.pass4)/4;
	
	int civil_students=ci.student1+ci.student2+ci.student3+ci.student4;
	int civil_pass=(ci.pass1+ci.pass2+ci.pass3+ci.pass4)/4;	
	
	int total_students=cse_students+ece_students+mech_students+civil_students;
	int total_pass=(cse_pass+ece_pass+mech_pass+civil_pass)/4;
	cout<<"COLLAGE ADMINISTRATION"<<endl<<"_____________________"<<endl;
	cout<<"Options:-"<<endl;
	int k=1;
	int year;
	int cs;
	int j=0;
	while (k!=0){
	cout<<"1)cse"<<endl<<"2)ece"<<endl<<"3)mech"<<endl<<"4)civil"<<endl<<"5)Total Collage students"<<endl<<"6)Total collage pass percentage"<<endl<<"0)To exit"<<endl<<"Your choice please:-"<<endl;
	cin>>cs;
	switch(cs){	
	case(1):
		j=1;
		while(j!=0){
		cout<<"1)1st year"<<endl<<"2)2nd year"<<endl<<"3)3rd year"<<endl<<"4)4th year"<<endl<<"5)Total Cse students"<<endl<<"6)Total cse pass percentage"<<endl<<"0)To exit"<<endl<<"Your choice please:-"<<endl<<"\r";
		cin>>year;
		switch(year){
		case 0:
			j=0;
			break;
		case 1:
			c.cse1();
			break;
		case 2:
			c.cse2();
			break;
		case 3:
			c.cse3();
			break;
		case 4:
			c.cse4();
			break;
		case 5:
			c.branch_total_student();
			break;
		case 6:
			c.branch_total_pass();
			break;
		}
		
	}
	break;
	
	case(2):
		j=1;
		while(j!=0){
		cout<<"1)1st year"<<endl<<"2)2nd year"<<endl<<"3)3rd year"<<endl<<"4)4th year"<<endl<<"5)Total Cse students"<<endl<<"6)Total cse pass percentage"<<endl<<"0)To exit"<<endl<<"Your choice please:-";
		cin>>year;
		switch(year){
		case(1):
			e.ece1();
			break;
		case 2:
			e.ece2();
			break;
		case 3:
			e.ece3();
			break;
		case 4:
			e.ece4();
			break;
		case 5:
			e.branch_total_student();
			break;
		case 6:
			e.branch_total_pass();
			break;
		case 0:
			j=0;
			break;
		}
	}
	break;
	
	
	
	
	case(3):
		j=1;
		while(j!=0){
		cout<<"1)1st year"<<endl<<"2)2nd year"<<endl<<"3)3rd year"<<endl<<"4)4th year"<<endl<<"5)Total Cse students"<<endl<<"6)Total cse pass percentage"<<endl<<"0)To exit"<<endl<<"Your choice please:-";
		cin>>year;
		switch(year){
		case(1):
			m.mech1();
			break;
		case 2:
			m.mech2();
			break;
		case 3:
			m.mech3();
			break;
		case 4:
			m.mech4();
			break;
		case 5:
			m.branch_total_student();
			break;
		case 6:
			m.branch_total_pass();
			break;
		case 0:
			j=0;
			break;
		}
	}
	break;
	
	
	
	case(4):
		j=1;
		while(j!=0){
		cout<<"1)1st year"<<endl<<"2)2nd year"<<endl<<"3)3rd year"<<endl<<"4)4th year"<<endl<<"5)Total Cse students"<<endl<<"6)Total cse pass percentage"<<endl<<"0)To exit"<<endl<<"Your choice please:-";
		cin>>year;
		switch(year){
		case(1):
			ci.civil1();
			break;
		case 2:
			ci.civil2();
			break;
		case 3:
			ci.civil3();
			break;
		case 4:
			ci.civil4();
			break;
		case 5:
			ci.branch_total_student();
			break;
		case 6:
			ci.branch_total_pass();
			break;
		case 0:
			j=0;
			break;
		}
	}
	
	case 5:
		cout<<"Total students in Collage:-"<<total_students<<endl;
		break;
	
	case 6:
		cout<<"Total Collage pass percentage:-"<<total_pass<<endl;
		break;
	case 0:
		k=0;
		break;	
}		
}
cout<<"____________THANK YOU SO MUCH VISIT AGAIN______________";	
}


int main(){
	cse c;
	ece e;
	mech m;
	civil ci;
	cout<<whole_total(c,e,m,ci);	
}
