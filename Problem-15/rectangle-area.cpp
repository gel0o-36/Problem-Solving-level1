#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

// Function prototypes
Rectangle readInfo();
float calculateArea(Rectangle rec);
void printArea(Rectangle rec);

int main() {
    Rectangle rec = readInfo(); // Read rectangle dimensions
    printArea(rec); // Print the area

    cout << "Press Enter to continue...";
    cin.ignore(); // Clear the buffer
    cin.get(); // Wait for user input
    return 0;
}

Rectangle readInfo() {
    Rectangle rec;  
    cout << "Enter the length of the rectangle: ";
    cin >> rec.length;

    cout << "Enter the width of the rectangle: ";
    cin >> rec.width;

    return rec;
}

float calculateArea(Rectangle rec) {
    return rec.length * rec.width; // Calculate area
}

void printArea(Rectangle rec) {
    cout << "The area of the rectangle is: " << calculateArea(rec) << endl; // Display area
}
