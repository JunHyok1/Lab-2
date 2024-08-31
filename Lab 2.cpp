#include <iostream>
using namespace std;

int main() {
    float A;
    float B;
    float x;

    cout << "Hello, my name is Ian and I'm going to solve the equation: Ax + B = 0\n";
    cout << "For x\n\n";

    cout << "Please enter a value for A: ";
    cin >> A;

    cout << "Please enter a value for B: ";
    cin >> B;

    x = -B / A;

    cout << "\nSolving " << A << "x + " << B << " = 0 for x...\n\n";
    cout << "The answer is:\n";
    cout << "x = " << x << endl;

}