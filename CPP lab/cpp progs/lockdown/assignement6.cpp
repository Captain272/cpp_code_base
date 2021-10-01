//DISTRUCTERS AND VIRTUAL FUNCTIONS
#include <iostream>
using namespace std;

class upper
{
    public:
    upper()
    {
        cout << "upper Constructor" << endl;
    }
    ~upper()
    {
        cout << "upper Destructor" << endl;
    }
};

class lower : public upper
{
    public:
    lower()
    {
        cout << "lower Constructor" << endl;
    }
    ~lower()
    {
        cout << "lower Destructor" << endl;
    }
};

class lower2
{
    public:
    lower2()
    {
        cout << "lower2 Constructor" << endl;
    }
    virtual ~lower2()//virtual over here seems usless
    {
        cout << "lower2 Destructor" << endl;
    }
};

class lower3 : public lower2
{
    public:
    lower3()
    {
        cout << "lower3 Constructor" << endl;
    }
    ~lower3()
    {
        cout << "lower3 Destructor" << endl;
    }
};


int main()
{
	cout<<"In case you use pointers and keywords such as new and delete you will early call the distructor\n";
    cout << "##############  Without virtual ##########\n";
    upper *l = new lower ;
    delete l ;

    cout << "############## With virtual ###############\n";
    lower2 *l2 = new lower3 ;
    delete l2 ;
    
    
    cout<<"In case normal creatio of the object distructor is called at the end\n";
    
    
     cout << "##############  Without virtual ##########\n";
    lower ll;

    cout << "############## With virtual ###############\n";
    lower3 ll1;

}
