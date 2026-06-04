// Day 6 Solutions
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int count = 0;

    while(num > 0) {
        if(num & 1)
            count++;

        num >>= 1;
    }

    cout << "Number of Set Bits = " << count;

    return 0;
}