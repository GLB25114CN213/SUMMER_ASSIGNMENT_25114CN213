#include <iostream>
using namespace std;

int main() {
    string books[5] = {"C++", "Java", "Python", "DBMS", "OS"};
    int choice;

    cout << "Available Books:\n";
    for(int i = 0; i < 5; i++)
        cout << i + 1 << ". " << books[i] << endl;

    cout << "Enter book number to issue: ";
    cin >> choice;

    if(choice >= 1 && choice <= 5)
        cout << books[choice - 1] << " book issued successfully.";
    else
        cout << "Invalid book number.";

    return 0;
}