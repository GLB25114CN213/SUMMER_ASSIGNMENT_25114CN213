#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    int freq[256] = {0};

    for(int i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    int maxFreq = 0;
    char maxChar;

    for(int i = 0; i < 256; i++) {
        if(freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = char(i);
        }
    }

    cout << "Maximum occurring character = " << maxChar << endl;
    cout << "Frequency = " << maxFreq;

    return 0;
}