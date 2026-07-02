#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[100];

    cin.getline(str1, 100);
    cin.getline(str2, 100);

    int count1[256] = {0};
    int count2[256] = {0};

    for(int i = 0; str1[i] != '\0'; i++)
        count1[str1[i]]++;

    for(int i = 0; str2[i] != '\0'; i++)
        count2[str2[i]]++;

    for(int i = 0; i < 256; i++) {
        if(count1[i] != count2[i]) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}