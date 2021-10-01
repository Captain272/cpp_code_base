#include<iostream>
#include<cstring>
using namespace std;
class test
 {  char sn[100];
   public:
      void get()
	    {
		     cin>>sn;
		}
		void show()
		{
		    cout<<"name="<<sn;
		}
		test operator+/*or add*/(test t2)
		   {    test t3;
		       strcpy(t3.sn,sn);
				strcat(t3.sn," ");
				strcat(t3.sn,t2.sn);
				return t3;   } };
 int main()
 {  test t1,t2,t3;
   cout<<"enter 1st name=";
     t1.get(); 
	 cout<<"enter 2nd name=";
	t2.get();
   t3=t1+t2;  //or t3=t1.add(t2); 
   t3.show(); 
   }
