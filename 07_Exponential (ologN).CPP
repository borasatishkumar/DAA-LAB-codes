#include <iostream>
using namespace std;

double power_iterative(double x, int n) {
    double result = 1;
    for (int i = 0; i < n; i++) {
        result *= x;
    }
    return result;
}

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter exponent: ";
    cin >> exponent;

    cout << "Result: " << power_iterative(base, exponent) << endl;

    return 0;
}
