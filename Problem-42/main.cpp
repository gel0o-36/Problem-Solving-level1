#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

    long double secInDay =  24 * 60 * 60;
    long double secInHour = 60 * 60;
    long double secInMin =  60;

struct enTime{long double days, hours, minutes, seconds, outCome;};

enTime userInput();
long double timeConv(enTime time);
void printTime(enTime time);

int main(){

    printTime(userInput());
    

    cout << "\n";
    system ("pause");
    return 0;
}

enTime userInput(){
    enTime time;
    cout << "Enter the days here : ";
    cin >> time.days;
    cout << "Enter the hours here : ";
    cin >> time.hours;
    cout << "Enter the minutes here : ";
    cin >> time.minutes;
    cout << "Enter the seconds here : ";
    cin >> time.seconds;

return time;
}

long double timeConv(enTime time){
    time.outCome = time.seconds + (time.minutes * secInMin) + (time.hours * secInHour) + (time.days * secInDay);
    return time.outCome;
}

void printTime(enTime time){
    time.outCome = timeConv(time);
    cout << "Time in sec is : " << time.outCome << " seconds";
}