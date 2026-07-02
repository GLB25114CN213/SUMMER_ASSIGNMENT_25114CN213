#include <iostream>
using namespace std;

int main() {
    int arr[100], n, choice, sum = 0, max;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\n1. Display\n2. Sum\n3. Maximum\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            for(int i = 0; i < n; i++)
                cout << arr[i] << " ";
            break;

        case 2:
            for(int i = 0; i < n; i++)
                sum += arr[i];
            cout << "Sum = " << sum;
            break;

        case 3:
            max = arr[0];
            for(int i = 1; i < n; i++) {
                if(arr[i] > max)
                    max = arr[i];
            }
            cout << "Maximum = " << max;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}