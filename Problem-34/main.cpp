#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float readInfo();
void printSales(float grade);

int main(){

    printSales(readInfo());
    
    cout << endl;
    system ("pause");
    return 0;
}
float readInfo(){
    double totalSales;


    while (true)
    {
    cout << "Enter your total sales here : ";
    cin >> totalSales;
    
    if (totalSales > 0 )
        break;
    else
        cout << "Enter a valid grade between ( 1 : 100 ).\n";
    }
    return totalSales;
}

void printSales(float totalSales){

    if (totalSales >= 1000000)
    {
        cout << "Your total percentage will be 1% of your total sales." << endl;
        cout << "Your commission is : " << (totalSales * 0.01);
    }
    else if (totalSales < 1000000 && totalSales >= 500000)
    {
        cout << "Your total percentage will be 2% of your total sales." << endl;
        cout << "Your commission is : " << (totalSales * 0.02);
    }
    else if (totalSales < 500000 && totalSales >= 100000)
    {
        cout << "Your total percentage will be 3% of your total sales." << endl;
        cout << "Your commission is : " << (totalSales * 0.03);
    }
    else if (totalSales < 100000 && totalSales >= 50000)
    {
        cout << "Your total percentage will be 5% of your total sales." << endl;
        cout << "Your commission is : " << (totalSales * 0.05);
    }
    else{
        cout << "Your total percentage will be 0% of your total sales." << endl;
        cout << "Your commission is : " << 0;
    }

    
}