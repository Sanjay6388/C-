#include <iostream>
using namespace std;

class Check
{
    private:
    int i;

    public:
    Check(): i(0) { }
    void operator ++()
    { ++i; }
    void Display() 
    {
        cout << "i=" << i << endl;
    }

    void name()
    {
        cout<<endl;
        cout<<"\n----------------------------------------";
        cout<<"\n\t\t Sanjay Sahani"<<endl;
        cout<<"                 08813207322";
        cout<<"\n----------------------------------------";
    }
};

int main()
{
    Check obj;
    obj.Display();
    ++obj;
    obj.Display();
    obj.name();

    return 0;
}
        
