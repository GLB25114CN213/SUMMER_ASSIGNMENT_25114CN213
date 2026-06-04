#include <iostream>
// Day 6 Solutions
using namespace std;

int main() {
    int num;
    cout << "Enter decimal number: ";
    cin >> num;

    long long binary = 0;
    int place = 1;

    while(num > 0) {
        int rem = num % 2;
        binary += rem * place;
        place *= 10;
        num /= 2;
    }

    cout << "Binary = " << binary;

    return 0;
}