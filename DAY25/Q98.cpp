#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    cout << "Common Characters: ";

    for(int i = 0; str1[i] != '\0'; i++) {

        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++) {
            if(str1[i] == str1[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for(int j = 0; str2[j] != '\0'; j++) {
            if(str1[i] == str2[j]) {
                cout << str1[i] << " ";
                break;
            }
        }
    }

    return 0;
}