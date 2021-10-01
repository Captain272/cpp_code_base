#include <iostream>
using namespace std;

template<class T>
class one
{
protected:
T x ;
T y ;
void display()
{
cout << " x : " << x << endl;
cout << " y : " << y << endl;
}
};

template <class T>
class two : public one<T>
{
public :
T z ;
two(T a , T b, T c)
{
this->x = a ;
this->y= b ;
z = c ;
}

void display()
{
cout << " x : " << this->x << endl ;
cout << " y : " << this->y << endl;
cout << " z : " << z << endl;
}
};

int main()
{
two<int> t(1,2,3) ;
t.display() ;
}
