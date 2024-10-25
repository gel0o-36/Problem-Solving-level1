#include <iostream>

using namespace std;

// Function declarations
float userInput();          
void printInput(float sum); 

int main() {
    float sum = userInput();   // Get the total sum of user input numbers
    printInput(sum);           // Print the calculated sum
    
    cout << "\n";
    system("pause");           // Pause before exiting (Windows only)
    return 0;
}

// Function to take multiple user inputs and calculate their sum
float userInput() {
    float sum = 0;
    float test = 0;

    while (true) {
        cout << "Enter a number, or press -99 to finish and calculate the sum: ";
        cin >> test;

        if (test == -99) {
            break;
        }

        sum = sum + test;
    }

    return sum;
}

// Function to display the calculated sum
void printInput(float sum) {
    cout << "Sum: " << sum << endl;
}
