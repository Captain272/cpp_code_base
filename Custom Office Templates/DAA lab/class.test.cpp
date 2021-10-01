#include<bits/stdc++.h>
using namespace std;
class Student
{
    int roll_no;
    float marks;
    public:
        void getdata(int roll_no, float marks);
        void putdata();
};
void Student :: getdata(int roll_no, float marks){
    this->roll_no=roll_no;
    this->marks=marks;
}
void Student :: putdata (){
    cout << roll_no<< marks <<"\n";
}

Int main(){
    int roll_no=8;
    float marks=8;
    cout << roll_no << marks << "\n";
    return 0;
}
