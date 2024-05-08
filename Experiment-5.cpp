#include <iostream>  
using namespace std;  
class Demo {  
private:
    int x, y;  

public:
   
    Demo() {
        x = 17;  
        y = 21;  
        
        cout << "Object 1 is called --> Under DEFAULT CONSTRUCTOR" << endl;
        cout << "Values of X and Y are:" << endl;
        cout << "X = " << x << ", Y = " << y << endl;  
    }

    
    Demo(int a, int b) {
        x = a;  
        y = b;  
        
        cout << "\nObject 2 is called --> Under PARAMETERIZED CONSTRUCTOR" << endl;
        cout << "Values of X and Y are:" << endl;
        cout << "X = " << x << ", Y = " << y << endl;
    }
};

void name() {  
    cout << "\n\tSanjay Sahani" << endl;
    cout << "\t08813202821" << endl;
}

int main() {
    Demo obj1;  
    Demo obj2(22, 18);  
    
    name();  

    return 0;  
}
