#include <iostream>
using namespace std;

int main() {
    int n;
    int even = 0;
    int odd = 0;

    cout << "Enter size: ";
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++) {
        cin >> arr[i];

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}