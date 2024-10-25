/*
    calculate the area of the circle using the circumference ---> محيط) الدائره)
*/
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
const float PI = 3.14;
float readInfo();
float calcuateArea(float circum);
void printArea(float circum);

int main(){
    cout << setprecision(3);
    printArea(readInfo());

    system("pause");
    return 0;
}


float readInfo(){
    float circum;

    while (true){
    cout << "Enter the cirumference of the circle in cm : ";
    cin >> circum;

    if (circum > 0)
    {
        break;
    }else{
        cout << "Wrong input please enter a possitive number.\n";
    }
    }
return circum;
}

float calcuateArea(float circum){
return (pow(circum,2))/(4 * PI);
}

void printArea(float circum){
    cout << "The area of the circle is : " << calcuateArea(circum) << endl;
}
