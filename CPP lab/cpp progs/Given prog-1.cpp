////a)Write a C++ program illustrating a program to find the roots of a quadratic equation use switch statements to handle different values of the discriminant 
////(b^2-4*a*c). 
////b) Write a C++ program illustrating to sort integer numbers 
////c) Write a C++ program illustrating fac torial using recursion.
,.#include <iostream>
#include <cmath>
using namespace std;

//int fact(int a)
//{
//	int result;
//	if(a==0)
//	{
//		
//		return 1;
//		
//	}
//	else
//	{
//		
//		 return a * fact(a-1);
//		
//	}
//	
//}
//int main()
//{
//	int a,b,c;
//	cout<<"Enter the vlaue of x^2"<<endl;
//	cin>>a;
//	cout<<"Enetr the value of x"<<endl;
//	cin>>b;
//	cout<<"enetr the values of the condtant"<<endl;
//	cin>>c;
//	cout<<endl;
//	int dis;
//	dis=(b*b)-(4*a*c);
//	cout<<dis<<endl;
//	int dir;
//	if(dis>0)
//	{
//		dir=1;
//	}
//	else if(dis<0)
//	{
//		dir=2;
//	}
//	else
//	{
//		dir=0;
//	}
//	switch(dir)
//	{
//		case 1:
//			cout<<"positive root"<<endl;
//			cout<< ((-b)+sqrt(dis))/(2*a)<<endl;
//			cout<<"positive root"<<endl;
//			cout<< ((-b)-sqrt(dis)/(2*a);
//			break;
//		break;
//		
//		case 2:
//			cout<<"not real root"<<endl;
//			cout<<"real part =" << (-b)/2*a<<"+"<<"imaginary part =" <<(sqrt(dis))/2*a<<endl;
//			cout<<"positive root"<<endl;
//			cout<<"real part =" << (-b)/2*a<<"-"<<"imaginary part =" <<(sqrt(dis))/2*a<<endl;
//			break;
//		case 0:
//			cout<<"equal roots"<<endl;
//			cout<< (-b)/2*a<<endl;
//			break;
//	
//		
//	}
//
//	
//}

int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
    
    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    
//int a;
//cout<<"Enter the vaue"<<endl;
//cin>>a;
//cout<<"the factoorial of the no is";
//cout<<fact(a);
}


