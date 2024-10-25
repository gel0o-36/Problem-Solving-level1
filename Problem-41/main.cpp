#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const float hoursInDay = 24, hoursInWeek = 24 * 7;

float userInput();
void printInput(float hours);

int main(){

    printInput(userInput());

    system ("pause");
    return 0;
}

float userInput(){
    float hours;
    while (true)
    {
        cout << "Enter a number of hours : ";
        cin >> hours;
        if (hours > 0)
            break;
        else
            cout << "Please enter a positive number.\n";
    }
    return hours;
}

void printInput(float hours){
    cout << setprecision(4);
    cout << hours / hoursInDay << " Days" << endl;
    cout << setprecision(3);
    cout << hours / hoursInWeek << " Weeks" << endl;
}