#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct stRec {
    float length;        // Length of one side of the rectangle
    float diagonalLength; // Length of the diagonal
};

stRec readInfo();
float area(stRec rec);
void printInfo(float area);

int main() {
    stRec rec = readInfo(); // Read rectangle information
    float calculatedArea = area(rec); // Calculate the area
    printInfo(calculatedArea); // Print the area

    cout << "\nPress Enter to continue...";
    cin.ignore(); // Clear buffer
    cin.get();    // Wait for user input
    return 0;
}

stRec readInfo() {
    stRec rec;
    cout << "Enter the length of one side of the rectangle: ";
    cin >> rec.length;

    cout << "Enter the diagonal length: ";
    cin >> rec.diagonalLength;

    // Input validation to prevent invalid area calculation
    if (rec.length >= rec.diagonalLength) {
        cerr << "Error: The diagonal length must be greater than the side length.\n";
        exit(1); // Exit the program due to invalid input
    }

    return rec;
}

float area(stRec rec) {
    // Calculate the area using the provided formula
    return rec.length * sqrt(pow(rec.diagonalLength, 2) - pow(rec.length, 2));
}

void printInfo(float area) {
    cout << "The Area will be: " << area; 
}
