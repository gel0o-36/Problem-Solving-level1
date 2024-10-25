#include <iostream>
using namespace std;

// Function to read two floating-point numbers
void readNum(float& a, float& b);
// Function to swap two floating-point numbers using reference parameters
void numSwap(float &a, float &b);

int main(){
    float a, b;
    
    readNum(a,b); // Read numbers from user input
    
    cout << "Before swap: A = " << a << ", B = " << b << endl;
    
    
    numSwap(a,b); // Swap the values
    
    cout << "After swap in main function: A = " << a << ", B = " << b << endl;
    
    
    // Pause the system to view results
    system("pause");
    return 0;
}

void readNum(float& a, float& b){
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
}


void numSwap(float &a, float &b) {
    float temp = a; // Store the value of a in a temporary variable
    a = b;          // Assign the value of b to a
    b = temp;      // Assign the value of temp (original a) to b
}
