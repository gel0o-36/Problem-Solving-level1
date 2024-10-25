#include<iostream>
#include<cmath>
using namespace std;
int readInfo(int number , int power);
int main(){

    int power, number;

    int Final = readInfo(number, power);

    cout << "The final number will be : " << Final << endl;

    system("pause");
    return 0;
}

int readInfo(int number , int power){

    int final = 1;

    cout << "Enter the number here : ";
    cin >> number;
    cout << "Enter the number that you want to power it by : ";
    cin >> power;
    
    for (int i = 1 ; i <= power; i++){
        final = number * number ;
    }
    return final;
}