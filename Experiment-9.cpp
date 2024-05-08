#include <iostream>
using namespace std;

class Vehicle
{
    public:
    void vehicle()
    {
        cout<<"I am a vehicle\n";
    }
};
class FourWheeler : public Vehicle
{
    public:
    void fourWheeler()
    {
        cout<<"I have four wheels\n"; 
    }
};
class Car : public FourWheeler
{
    public:
    void car()
    {
        cout<<"I am a car\n";
    }
    void name()
    {
        cout<<endl;
        cout<<"\n----------------------------------------";
        cout<<"\n\t\tSanjay Sahani"<<endl;
        cout<<"                08813207322";
        cout<<"\n----------------------------------------";
    } 
};
int main()
{
    Car obj;
    obj.car();
    obj.fourWheeler();
    obj.vehicle();
    obj.name();
    return 0;
}
