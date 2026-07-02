#include <iostream>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1;

    int arr1[n1];
    for(int i = 0; i < n1; i++)
        cin >> arr1[i];

    cin >> n2;

    int arr2[n2];
    for(int i = 0; i < n2; i++)
        cin >> arr2[i];

    int i = 0, j = 0;

    while(i < n1 && j < n2) {
        if(arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
        else
            cout << arr2[j++] << " ";
    }

    while(i < n1)
        cout << arr1[i++] << " ";

    while(j < n2)
        cout << arr2[j++] << " ";

    return 0;
}