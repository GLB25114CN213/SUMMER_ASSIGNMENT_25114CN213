#include <iostream>
using namespace std;

int main() {
    int num1, num2, max;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Find greater number
    max = (num1 > num2) ? num1 : num2;

    while (true) {

        if (max % num1 == 0 && max % num2 == 0) {
            cout << "LCM = " << max;
            break;
        }

        max++;
    }

    return 0;
}