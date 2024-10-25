#include <iostream>
using namespace std;

// Function to get the PIN code from the user
string getPIN() {
    string pin;
    cout << "Enter your PIN code: ";
    cin >> pin;
    return pin;
}

// Function to check if the entered PIN is correct
bool isPINCorrect(const string &pin) {
    return pin == "1234";
}

// Function to display the result
void displayResult(bool isCorrect) {
    if (isCorrect) {
        cout << "Pass." << endl;
    } else {
        cout << "Fail." << endl;
    }
}

int main() {
    string PIN;

    // Loop until the correct PIN is entered
    do {
        PIN = getPIN(); // Get the PIN from the user
    } while (!isPINCorrect(PIN)); // Continue until the PIN is correct

    // Display the result after exiting the loop
    displayResult(isPINCorrect(PIN));

    cout << "Press Enter to exit...";
    cin.ignore(); // Clear any newline characters from the input buffer
    cin.get(); // Wait for user input to exit
    return 0;
}
