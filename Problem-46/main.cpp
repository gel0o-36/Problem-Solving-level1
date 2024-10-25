#include <iostream>

using namespace std; // Using namespace to avoid prefixing std::

void printUppercase() {
    for (int i = 65; i <= 90; i++) {
        cout << char(i) << " ";
    }
    cout << endl;
}

void printLowercase() {
    for (int x = 97; x <= 122; x++) {
        cout << char(x) << " ";
    }
    cout << endl;
}

int main() {
    // Call functions to print letters
    printUppercase();
    printLowercase();

    cout << "Press Enter to exit...";
    cin.get(); // Wait for user input to exit
    return 0;
}
