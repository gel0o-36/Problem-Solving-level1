#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

    int secInDay =  24 * 60 * 60;
    int secInHour = 60 * 60;
    int secInMin =  60;

struct enTime{int days, hours, minutes, seconds, outCome , remainder = 0;};

enTime userInput();
enTime timeConv(enTime time);
void printTime(enTime time);

int main(){

    printTime(userInput());
    

    cout << "\n";
    system ("pause");
    return 0;
}

enTime userInput(){
    enTime time;
    cout << "Enter the seconds here : ";
    cin >> time.seconds;

return time;
}

enTime timeConv(enTime time){
    time.days = floor(time.seconds / secInDay);
    time.remainder = time.seconds % secInDay ;

    time.hours = floor(time.remainder / secInHour);
    time.remainder = time.remainder % secInHour;

    time.minutes = floor(time.remainder / secInMin);
    time.remainder = time.remainder % secInMin;
    
    time.seconds = time.remainder;
    return time;
}

void printTime(enTime time){
    time = timeConv(time);
    cout << time.days << " Days : " << time.hours << " Hours : " << time.minutes << " Minutes : " << time.seconds << " Seconds" << endl;
}