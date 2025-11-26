#include <iostream>
using namespace std;

double power(int count, double base) {
    if (count == 0)
        return 1;
    else
        return base * power(count - 1, base);
}

int main() {
    cout << power(5, 2) << endl;  // 2^5 = 32
    return 0;
}
