CONSTRUCTOR AND DISTRUCTOR//
#include <iostream>
using namespace std ;

class upper
{
public:
    int a ;
    
    upper()
    {
        cout << "Upper constructor \n"; 
    }
    
    ~upper()
    {
        cout << "Upper Destructor \n"; 
    }
};

class lower: public upper
{
public:
    lower()
    {
        cout << "lower Constructor ";
        cout << "x : ";
        cin >> a ;
    }

    ~lower()
    {
        cout << "x value is : " << a << endl;
        cout << "lower class Destructor " << endl;
    }
};

int main()
{
    lower d;
}
