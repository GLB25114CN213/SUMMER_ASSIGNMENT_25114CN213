#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    int vowels = 0, consonants = 0;

    for(int i = 0; str[i] != '\0'; i++) {

        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z')) {

            char ch = tolower(str[i]);

            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;

    return 0;
}