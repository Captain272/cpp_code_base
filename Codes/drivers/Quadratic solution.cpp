#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x1,x2,a,b,c,dis,realPart,imaginaryPart;
	cout <<"enter the cofficients a,b,c";
	cin >> a >> b >> c ;
	dis = b*b - 4*a*c;
	switch ((dis >= 0))
	{
	case 1:
        x1 = (-b + sqrt(dis)) / (2*a);
        x2 = (-b - sqrt(dis)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1<< endl<<"x2="<<x2;
        break;
    
    case 0:
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-dis)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl<<"x2="<<realPart<<"-"<<imaginaryPart<<"i";
        break;

    
	}
}
/*Output

Enter coefficients a, b and c: 4
5
1
Roots are real and different.
x1 = -0.25
x2 = -1*/
