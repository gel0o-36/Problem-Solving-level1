#include <iostream>
using namespace std;

// Function to get loan amount and monthly payment from the user
void getLoanDetails(float &loanAmount, float &monthlyPayment) {
    cout << "Enter the loan amount that you need: ";
    cin >> loanAmount;
    
    cout << "How much do you need to pay monthly: ";
    cin >> monthlyPayment;
}

// Function to calculate the number of months needed to pay off the loan
float calculateMonths(float loanAmount, float monthlyPayment) {
    return loanAmount / monthlyPayment;
}

// Function to display the result
void displayResult(float months) {
    cout << "You need " << months << " months to finish your installments." << endl;
}

int main() {
    float LoanAmount, MonthlyPayment, months;

    // Get loan amount and monthly payment from the user
    getLoanDetails(LoanAmount, MonthlyPayment);

    // Check if MonthlyPayment is greater than zero before calculation
    if (MonthlyPayment > 0) {
        months = calculateMonths(LoanAmount, MonthlyPayment);
        displayResult(months);
    } else {
        cout << "Monthly payment must be greater than zero." << endl;
    }

    cout << "Press Enter to exit...";
    cin.ignore(); // Clear any newline characters from the input buffer
    cin.get(); // Wait for user input to exit
    return 0;
}
