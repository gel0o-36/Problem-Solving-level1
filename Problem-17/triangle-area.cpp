#include <iostream>
using namespace std;

struct Triangle {
    float base;     // Base of the triangle
    float height;   // Height of the triangle
    float area;     // Area of the triangle
};

Triangle readInfo();
void calculateTriangle(Triangle &tri); // Pass by reference to modify the triangle directly
void printInfo(const Triangle &tri);    // Pass by const reference to avoid unnecessary copies

int main() {
    Triangle tri = readInfo(); // Read triangle information
    calculateTriangle(tri);     // Calculate the area
    printInfo(tri);            // Print the triangle's area
    
    cout << "\nPress Enter to continue...";
    cin.ignore(); // Clear buffer
    cin.get();    // Wait for user input
    return 0;
    return 0;
}

Triangle readInfo() {
    Triangle tri;

    cout << "Enter the base of the triangle: ";
    cin >> tri.base;

    cout << "Enter the height of the triangle: ";
    cin >> tri.height;

    // Input validation
    if (tri.base <= 0 || tri.height <= 0) {
        cerr << "Error: Base and height must be positive values.\n";
        exit(1); // Exit if the input is invalid
    }

    return tri;
}

void calculateTriangle(Triangle &tri) {
    tri.area = (tri.base * tri.height) / 2; // Calculate and store the area
}

void printInfo(const Triangle &tri) {
    cout << "The area of the triangle is: " << tri.area << endl; // Print the stored area
}
