#include <iostream>
using namespace std;

int main() {
    int answer;
    int score = 0;

    cout << "===== Simple Quiz =====\n\n";

    cout << "Q1. Capital of India?" << endl;
    cout << "1. Mumbai\n2. Delhi\n3. Chennai\n4. Kolkata\n";
    cout << "Answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nQ2. 5 + 7 = ?" << endl;
    cout << "1. 10\n2. 11\n3. 12\n4. 13\n";
    cout << "Answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    cout << "\nQ3. C++ was developed by?" << endl;
    cout << "1. Dennis Ritchie\n";
    cout << "2. Bjarne Stroustrup\n";
    cout << "3. James Gosling\n";
    cout << "4. Guido van Rossum\n";
    cout << "Answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    cout << "\nYour Score: " << score << "/3" << endl;

    if (score == 3)
        cout << "Excellent!" << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}