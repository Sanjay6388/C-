#include <iostream>
using namespace std;

class demo {
    int x, y;
public:
    void input() {
        cout << "\nEnter the value of X:- ";
        cin >> x;
        cout << "\nEnter the value of Y:- ";
        cin >> y;
    }

    void output() {
        cout << "\nThe values of X and Y are:" << endl;
        cout << "\nX=" << x << "\nY=" << y;
    }

    void name() {
        cout << "\n";
        cout << "\n Sanjay Sahani" << endl;
        cout << "\n 08813202821" << endl;
        cout << "\n";
    }
};

int main() {
    demo obj;
    obj.input();
    obj.output();
    obj.name();

    return 0;
}
