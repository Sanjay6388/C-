#include <iostream>
using namespace std;

class Demo {
private:
    int size;
    int *ptr;

public:
    Demo(int x) {
        if (x > 0) {
            size = x;
            ptr = new int[size];
        } else {
            size = 0;
            ptr = nullptr;
            cout << "Invalid size provided!" << endl;
        }
    }

    ~Demo() {
        delete[] ptr;
    }

    void getdata() {
        if (ptr != nullptr) {
            cout << "Enter the elements: " << endl;
            for (int i = 0; i < size; i++) {
                cin >> ptr[i];
            }
        } else {
            cout << "Array not initialized." << endl;
        }
    }

    void setdata() {
        if (ptr != nullptr) {
            cout << "\nThe entered values are:" << endl;
            for (int i = 0; i < size; i++) {
                cout << ptr[i] << endl;
            }
        }
    }

    void name() {
        cout << "\n\tSanjay Sahani" << endl;
        cout << "\t08813202821" << endl;
    }
};

int main() {
    int s;
    cout << "Enter the size for an array: ";
    cin >> s;

    Demo obj(s);

    obj.getdata();
    obj.setdata();
    obj.name();
    
    return 0;
}
