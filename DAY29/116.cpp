#include <iostream>
using namespace std;

int main() {
    string itemName;
    int quantity;
    double price, total;

    cout << "Enter Item Name: ";
    cin >> itemName;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price per Item: ";
    cin >> price;

    total = quantity * price;

    cout << "\nInventory Details\n";
    cout << "Item Name: " << itemName << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price: " << price << endl;
    cout << "Total Value: " << total << endl;

    return 0;
}