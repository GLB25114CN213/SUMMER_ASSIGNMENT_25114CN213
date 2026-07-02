#include <iostream>
using namespace std;

int main() {
    char str[200];
    cin.getline(str, 200);

    int maxLen = 0, currentLen = 0;
    int start = 0, maxStart = 0;

    for(int i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0') {
            currentLen++;
        } else {
            if(currentLen > maxLen) {
                maxLen = currentLen;
                maxStart = start;
            }

            currentLen = 0;
            start = i + 1;
        }

        if(str[i] == '\0')
            break;
    }

    cout << "Longest word: ";

    for(int i = maxStart; i < maxStart + maxLen; i++)
        cout << str[i];

    cout << endl << "Length = " << maxLen;

    return 0;
}