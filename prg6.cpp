#include <iostream>

class MathOperations {
public:
    // Method to add two numbers
    int add(int a, int b) {
        return a + b;
    }

    // Method to add three numbers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    // Create an instance of MathOperations
    MathOperations math;

    // Overloaded functions will work based on the number of arguments passed
    std::cout << "Result of adding two numbers: " << math.add(5, 10) << std::endl;
    std::cout << "Result of adding three numbers: " << math.add(5, 10, 15) << std::endl;

    return 0;
}
