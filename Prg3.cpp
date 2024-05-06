#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    double num1 = 123.45678;
    double num2 = 9876.54321;

    // Setting precision for floating-point numbers
    cout << "Default precision:" << endl;
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl << endl;

    cout << "Precision set to 2 decimal places:" << endl;
    cout << fixed << setprecision(2);
    cout << "Number 1: " << num1 << endl;
    cout << "Number 2: " << num2 << endl << endl;

    cout << "Width set to 10 characters, filled with '-' and precision set to 3 decimal places:" << endl;
    cout << setw(10) << setfill('-') << fixed << setprecision(3) << num1 << endl;
    cout << setw(10) << setfill('-') << fixed << setprecision(3) << num2 << endl;

    return 0;
}
