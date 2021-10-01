//BASE WITHOUT CONSTRUCTOR
#include <iostream> 
using namespace std ;
class upper
{
public:
    int a ;
};

class lower : public upper
{
public:
    lower()
    {
        cout << "lower class Constructor " << endl;
        cout << "Enter a : " << endl;
        cin >> a ;
    }

    ~lower()
    {
        cout << "a value is : " << a << endl;
        cout << "lower class Destructor " << endl;
    }
};

int main()
{
    lower a;
    return 0 ;
}


