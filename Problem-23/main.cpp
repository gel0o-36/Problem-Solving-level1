#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
const float PI = 3.14;

struct circleArea {
    float side[3], input;
};


circleArea readInfo();
float fullCicleArea(circleArea cArea);
void printArea(circleArea cArea);

int main(){

    circleArea cArea;
    cArea = readInfo();
    
    printArea(cArea);

    cout << "\n";
    system ("pause");
    return 0;
}

circleArea readInfo(){
    circleArea cArea;
    
    for (int i = 1; i <= 3 ; i++){
        cout << "Enter Number " << i << " : ";
        cin >> cArea.side[i - 1];
    }
    return cArea;
}

float fullCicleArea(circleArea cArea){
    float p =  ((cArea.side[0] + cArea.side[1] + cArea.side[2]) / 2 );
    return PI * pow((cArea.side[0] * cArea.side[1] * cArea.side[2]) / (4 * sqrt(p * (p - cArea.side[0]) * (p - cArea.side[1]) * (p - cArea.side[2]))) ,2);
}

void printArea(circleArea cArea){
    cout << "The Area will be : " << fullCicleArea(cArea) << " cm \n";
}

