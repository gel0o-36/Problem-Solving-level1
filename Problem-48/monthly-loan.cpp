#include <iostream>
using namespace std;

// Function to get loan amount and number of months from the user
void getLoanDetails(float &loanAmount, float &months) {
    cout << "Enter the loan amount that you need: ";
    cin >> loanAmount;

    cout << "On how many months: ";
    cin >> months;
}

// Function to calculate the monthly installment
float calculateInstallment(float loanAmount, float months) {
    return loanAmount / months;
}

// Function to display the result
void displayResult(float installmentAmount) {
    cout << "The amount you need to pay for each month is: " << installmentAmount << endl;
}

int main() {
    float LoanAmount, months, InstallmentAmount;

    // Get loan amount and months from the user
    getLoanDetails(LoanAmount, months);

    // Check if months is greater than zero before calculation
    if (months > 0) {
        InstallmentAmount = calculateInstallment(LoanAmount, months);
        displayResult(InstallmentAmount);
    } else {
        cout << "The number of months must be greater than zero." << endl;
    }

    cout << "Press Enter to exit...";
    cin.ignore(); // Clear any newline characters from the input buffer
    cin.get(); // Wait for user input to exit
    return 0;
}
