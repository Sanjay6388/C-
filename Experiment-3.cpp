#include <iostream> 
using namespace std;

class Demo {  
private:
    int x; 
    static int y; 
public:
    void output(int a) {  
        x = a;
        y++;  
        cout << "The values of X and Y are:" << endl;  
        cout << "X = " << x << ", Y = " << y << endl;  
    }

    void name() {  
        cout << "\n\tSanjay Sahani" << endl;  
        cout << "\t08813202821" << endl;
    }
};

int Demo::y = 0;  
int main() {
    Demo obj;  
    obj.output(36);  
    obj.name();  
    return 0;  
}
