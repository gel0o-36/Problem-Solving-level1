#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.141592653589793;

float readInfo();
float calculateArea(float info);
void printingArea(float info);

int main(){

    printingArea(calculateArea(readInfo()));

    system("pause");
    return 0;
}

float readInfo(){
    float info;

    while(true){
    cout << "Enter the length of the side of the square that is the cirlce inscribed into it : ";
    cin >> info;
    if (info > 0)
    {
        break;
    }else{
        cout << "Wrong info please enter a possitive info.\n"; 
    }}
    
    return info;
}
float calculateArea(float info){
    return PI * ( pow( info , 2 ) / 4 );
}
void printingArea(float info){
    cout << "The area of the circle is : " << info << endl;
}