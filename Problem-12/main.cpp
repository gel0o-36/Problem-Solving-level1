#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

enum enNum{
    NumX = 1, NumY = 2, Equal = 3
};

struct stNum{
    float Num1, Num2;
};


stNum readInfo();
enNum compareInfo(stNum Num);
void printNum(stNum Num);

int main(){

    printNum(readInfo());

    cout << "\n";
    system ("pause");
    return 0;
}


stNum readInfo(){
    stNum Num;
    cout << "Enter the first number : ";
    cin >> Num.Num1;
    cout << "Enter the second number : ";
    cin >> Num.Num2;
    return Num;
}

enNum compareInfo(stNum Num){
    
    if (Num.Num1 > Num.Num2){
        return enNum::NumX;
    }
    else if (Num.Num2 > Num.Num1){
        return enNum::NumY;
    }
    else{
        return enNum::Equal;
    }
}

void printNum(stNum Num){
    if (compareInfo(Num) == enNum::NumX)
    {
        cout << "First Number is the greater Number.\n";
    }
    else if (compareInfo(Num) == enNum::NumY)
    {
        cout << "Second Number is the greater Number.\n";
    }
    else{
        cout << "The two number are equal.\n";
    }
    
    
}