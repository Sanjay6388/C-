#include <iostream>
#include <limits>  
class Demo {
private:
    int x, y;  
public:
    void input(); 
    void output();
    void name();
};

void Demo::input() {
    std::cout << "Enter the value of X: ";
    while (!(std::cin >> x)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter an integer: ";
    }

    std::cout << "Enter the value of Y: ";
    while (!(std::cin >> y)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. Please enter an integer: ";
    }
}

void Demo::output() {
    std::cout << "The values of X and Y are:" << std::endl;
    std::cout << "X = " << x << ", Y = " << y << std::endl; 
}

void Demo::name() {
    std::cout << "\n\tSanjay Sahani" << std::endl;  
    std::cout << "\t08813202821" << std::endl;
}

int main() {
    Demo obj;
    obj.input();  
    obj.output();  
    obj.name();  

    return 0; 
}
