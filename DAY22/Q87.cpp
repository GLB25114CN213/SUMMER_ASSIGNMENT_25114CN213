#include <iostream>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++) {

        bool counted = false;

        for(int j = 0; j < i; j++) {
            if(str[i] == str[j]) {
                counted = true;
                break;
            }
        }

        if(!counted) {
            int count = 1;

            for(int k = i + 1; str[k] != '\0'; k++) {
                if(str[i] == str[k])
                    count++;
            }

            cout << str[i] << " = " << count << endl;
        }
    }

    return 0;
}