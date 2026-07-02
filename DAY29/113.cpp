#include <iostream>
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result = " << a + b;
            break;
        case 2:
            cout << "Result = " << a - b;
            break;
        case 3:
            cout << "Result = " << a * b;
            break;
        case 4:
            if(b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Cannot divide by zero";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}