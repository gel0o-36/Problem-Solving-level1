#include<iostream>
using namespace std;

struct stCoins{
float penny, nickels, quarters, dollars, dimes, totalPennies, totalDollars;
};

stCoins readInfo();
stCoins calcCoins(stCoins coins);
void printInfo(stCoins coins);

int main(){

printInfo(calcCoins(readInfo()));



system("pause");
    return 0;
}

stCoins readInfo(){
stCoins coins;
cout << "Enter the Pennies here : ";
cin >> coins.penny;
cout << "Enter the Nickels here : ";
cin >> coins.nickels;
cout << "Enter the Dimes here : ";
cin >> coins.dimes;
cout << "Enter the Quarters here : ";
cin >> coins.quarters;
cout << "Enter the Dollars here : ";
cin >> coins.dollars;

return coins;
}

stCoins calcCoins(stCoins coins){
coins.totalPennies = (coins.penny * 1) + (coins.nickels * 5) + (coins.dimes * 10) + (coins.quarters * 25) + (coins.dollars * 100);
coins.totalDollars = coins.totalPennies / 100;

return coins;
}

void printInfo(stCoins coins){
    cout << "The total Pennies : " << coins.totalPennies << " pennies" << endl;
    cout << "The total Dollars : " << coins.totalDollars << " dollars" << endl;
}