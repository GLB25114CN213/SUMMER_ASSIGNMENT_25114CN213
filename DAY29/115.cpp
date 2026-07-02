#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int choice;

    cout << "Enter string: ";
    cin >> str;

    cout << "\n1. Length\n2. Reverse\n3. Uppercase\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Length = " << str.length();
            break;

        case 2:
            reverse(str.begin(), str.end());
            cout << "Reverse = " << str;
            break;

        case 3:
            for(int i = 0; i < str.length(); i++)
                str[i] = toupper(str[i]);
            cout << "Uppercase = " << str;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}