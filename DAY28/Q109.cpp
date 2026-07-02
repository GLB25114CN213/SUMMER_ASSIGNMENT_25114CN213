#include <iostream>
using namespace std;

int main() {
    string bookName, author;
    int bookId;

    cout << "Enter Book ID: ";
    cin >> bookId;

    cout << "Enter Book Name: ";
    cin >> bookName;

    cout << "Enter Author Name: ";
    cin >> author;

    cout << "\nLibrary Record\n";
    cout << "Book ID: " << bookId << endl;
    cout << "Book Name: " << bookName << endl;
    cout << "Author: " << author << endl;

    return 0;
}