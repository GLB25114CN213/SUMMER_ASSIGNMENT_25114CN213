#include <iostream>
using namespace std;

int main() {
    string name;
    int tickets;
    double price = 150, total;

    cout << "Enter Customer Name: ";
    cin >> name;

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    total = tickets * price;

    cout << "\nTicket Booking Details\n";
    cout << "Name: " << name << endl;
    cout << "Tickets: " << tickets << endl;
    cout << "Total Amount: " << total << endl;

    return 0;
}