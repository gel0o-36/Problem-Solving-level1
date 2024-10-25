/*
    calculate the area of the circle using the circumference ---> محيط) الدائره)
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
const float PI = 3.14;
float area(float l);

int main(){
    float l;
    cout << "Enter the cirumference of the circle in cm : ";
    cin >> l;
    cout << setprecision(3);
    cout << "The area of the circle is : " << floor(area(l)) << endl;
    system("pause");
    return 0;
}

float area(float l){
float circleArea = (pow(l,2))/(4 * PI);
return circleArea;
}