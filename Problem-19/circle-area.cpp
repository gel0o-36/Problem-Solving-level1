#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
const float PI = 3.141592653589793238;

struct stArea{
    float diameter, radius, area;
};

stArea readInfo();
void calculateArea(stArea& area);
void printArea(stArea& area);

int main(){
    stArea area;
    area = readInfo();

    calculateArea(area);
    printArea(area);


}

stArea readInfo(){
    stArea area;
    while (true)
    {
        cout << "Enter the diameter for the circle : ";
        cin >> area.diameter;
    
        if (area.diameter > 0)
        {
            break; // 
        }
        else{
            cerr << "Invalid input. Radius must be a positive number. Please try again.\n";
        }
        
    }
    area.radius = area.diameter / 2;
    return area;
}

void calculateArea(stArea& area){
    cout << fixed << setprecision(2); // Set precision for better readability
    area.area = PI * pow(area.radius, 2);
}

void printArea(stArea& area){
    cout << "The area of the circle is : " << area.area << endl;
}