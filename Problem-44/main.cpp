#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

enum enDays{ Sunday = 1, Monday = 2, Tuesday = 3, Wednesday = 4, Thursday = 5, Friday = 6, Saturday = 7 };

enDays userInput();
void printInput(enDays days);

int main(){

    printInput(userInput());
    

    cout << "\n";
    system ("pause");
    return 0;
}

enDays userInput(){
    enDays days;
    short day;

    do
    {
        cout << "Enter the day's number between 1 to 7 : ";
        cin >> day;
        
    } while (day > 7);
    
    days = enDays(day);
    return days;
}

void printInput(enDays days){
        switch(days){

        case enDays::Sunday:
            cout << "Today is : Sunday.";
            break;

        case enDays::Monday:
            cout << "Today is : Monday.";
            break;

        case enDays::Tuesday:
            cout << "Today is : Tuesday.";
            break;

        case enDays::Wednesday:
            cout << "Today is : Wednesday.";
            break;

        case enDays::Thursday:
            cout << "Today is : Thursday.";
            break;

        case enDays::Friday:
            cout << "Today is : Friday.";
            break;

        case enDays::Saturday:
            cout << "Today is : Saturday.";
    }

}