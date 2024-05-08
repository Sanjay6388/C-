#include <iostream>  
using namespace std;  

class Demo {  
private:
    const int x = 17;  
    int a;  

public:
    
    Demo(int y) {
        a = y;  
    }

    void show() const {  
        cout << "X = " << x << ", A = " << a << endl; 
    }
};

int main() {
    Demo obj(21);  
    obj.show();  

   
    cout << "\n\tSanjay Sahani" << endl;
    cout << "\t08813202821" << endl;  

    return 0;  
}
