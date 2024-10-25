#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const float PI = 3.141592653589793238;

// Structure to hold the radius and area of the circle
struct CircleArea {
    float radius;
    float area;
};

// Function prototypes
CircleArea readInfo();
void calculateArea(CircleArea& area);
void printArea(const CircleArea& area);

int main() {
    CircleArea area;                 // Declare a CircleArea variable
    area = readInfo();              // Read circle information
    calculateArea(area);            // Calculate area
    printArea(area);                // Print area

    cout << "\nPress Enter to continue...";
    cin.ignore(); // Clear buffer
    cin.get();    // Wait for user input
    return 0;
}

// Function to read the radius from the user
CircleArea readInfo() {
    CircleArea area;                // Create a CircleArea object

    while (true) {
        cout << "Enter the radius of the circle: ";
        cin >> area.radius;

        if (area.radius > 0) {
            break;  // Valid input; exit the loop
        } else {
            cerr << "Invalid input. Radius must be a positive number. Please try again.\n";
        }
    }

    return area;                   // Return the CircleArea object
}

// Function to calculate the area of the circle
void calculateArea(CircleArea& area) {
    area.area = PI * pow(area.radius, 2); // Calculate the area
}

// Function to print the area of the circle
void printArea(const CircleArea& area) {
    cout << fixed << setprecision(2); // Set precision for better readability
    cout << "The area of the circle is: " << area.area << " cm" << endl; // Print area
}
