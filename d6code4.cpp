#include <iostream>
using namespace std;

int main() {
    long long x, n;

    cout << "Enter base: ";
    cin >> x;

    cout << "Enter exponent: ";
    cin >> n;

    long long result = 1;

    for(int i = 1; i <= n; i++) {
        result *= x;
    }

    cout << x << "^" << n << " = " << result;

    return 0;
}