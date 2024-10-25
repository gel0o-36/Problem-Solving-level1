#include <iostream>
#include <limits>
using namespace std;

int readInfo();
void printInfo(int num);

int main(){
    int num = readInfo();
    printInfo(num);

    cout << "Press Enter to continue...";
    cin.ignore(); // Waits for the user to press Enter
    cin.get();
    return 0;
}

int readInfo() {
    int num;
    while (true) {
        cout << "Enter a positive number: ";
        cin >> num;

        if (cin.fail()) { // Check if the input is invalid
            cin.clear(); // Clear the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a number.\n";
        } else if (num > 0) {
            break;
        } else {
            cout << "Please enter a positive number.\n";
        }
    }
    return num;
}


void printInfo(int num){
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}