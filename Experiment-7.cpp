#include <iostream>
using namespace std;

class Point 
{
private:
    double x, y;

public:
    Point(double a = 0.0, double b = 0.0) : x(a), y(b) {}

    bool operator==(const Point& p2) const
    {
        return (x == p2.x && y == p2.y);
    }

    void name()
    {
        cout << "\n----------------------------------------";
        cout << "\n\t\t Sanjay sahani" << endl;
        cout << "                 08813207322" << endl;
        cout << "----------------------------------------" << endl;
    }
};

int main()
{
    Point p(5, 0);
    Point q(5, 0);

    if (p == q)
        cout << "They are the same";
    else
        cout << "They are not the same";

    Point obj;
    obj.name();

    return 0;
}
