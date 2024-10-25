
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

enum enMonths{ January = 1, February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, Septemper = 9, Octoper = 10, November = 11, December = 12 };

enMonths userInput();
void printInput(enMonths months);

int main(){

    printInput(userInput());
    

    cout << "\n";
    system ("pause");
    return 0;
}

enMonths userInput(){
    short month;
    enMonths months;

    do
    {
        cout << "Enter the month number here (1 - 12) : ";
        cin >> month;
    } while (month > 12);

    months = enMonths(month);
    return months;
}

void printInput(enMonths months){

    switch(months){

        case enMonths::January:
            cout << "Month is : January.";
            break;
        
        case enMonths::February:
            cout << "Month is : February.";
            break;

        case enMonths::March:
            cout << "Month is : March.";
            break;

        case enMonths::April:
            cout << "Month is : April.";
            break;

        case enMonths::May:
            cout << "Month is : May.";
            break;

        case enMonths::June:
            cout << "Month is : June.";
            break;

        case enMonths::July:
            cout << "Month is : July.";
            break;
        
        case enMonths::August:
            cout << "Month is : August.";
            break;

        case enMonths::Septemper:
            cout << "Month is : September.";
            break;

        case enMonths::Octoper:
            cout << "Month is : October.";
            break;

        case enMonths::November:
            cout << "Month is : November.";
            break;

        case enMonths::December:
            cout << "Month is : December.";
            break;
    }
}