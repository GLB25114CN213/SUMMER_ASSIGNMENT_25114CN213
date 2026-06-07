<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << num << " is " << factorial;

    return 0;
=======
#include <iostream>
using namespace std;

int main() {
    int num;
    long long factorial = 1;

    cout << "Enter a number: ";
    cin >> num;

    
    for (int i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    cout << "Factorial of " << num << " is " << factorial;

    return 0;
>>>>>>> a82c2bdca22d66e67a0c2a7a43d07ddfbf53f419
}