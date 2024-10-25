#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
float PI = 3.14;

struct Area{
    float side1,side2;
};

Area readInfo();
float calculateArea(Area area);
void print(Area area);

int main(){

    print(readInfo());

    system ("pause");
    return 0;
}

Area readInfo(){
    Area area;
    while (true)
    {
        cout << "Enter the bigger side of triangle : ";
        cin >> area.side1;
        cout << "Enter the smaller side of triangle : ";
        cin >> area.side2;

        if(area.side1 > 0 && area.side2 > 0 && area.side1 > area.side2){
            break;
        }else{
            cout << "Invlaid please check if positive number and first number should be bigger.\n";
        }
    }
    return area;
}


float calculateArea(Area area){
    return ( PI * pow( area.side2, 2) / 4 ) * ( (2 * area.side1 - area.side2) / (2 * area.side1 + area.side2) );
}

void print(Area area){
    float result = calculateArea(area);
    cout << "The circle area will be : " << result << endl;
}