#include <iostream>
using namespace std;

class Name
{
    public:
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
    int x,y,sum;
    float average;

    cout << "Enter 2 integers: " << endl;
    cin>>x>>y;
    sum=x+y;
    average=sum/2;
    cout << "The sum of " << x << " and " << y << " is " << sum << "." << endl;
    cout << "The average of " << x << " and " << y << " is " << average << "." << endl;

    Name obj;
    obj.name();
};
