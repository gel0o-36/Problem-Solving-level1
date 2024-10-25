#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct stCalc
{
    char op;
    float num1, num2;
};

stCalc readInfo();
void calcInfo(stCalc calc);


int main(){

    calcInfo(readInfo());



    system ("pause");
    return 0;
}

stCalc readInfo(){
    stCalc calc;

    cout << "Enter the first number : ";
    cin >> calc.num1;

    cout << "Enter the second number : ";
    cin >> calc.num2;

    cout << "Which operation would you like to perform (+, -, /, *) : ";
    cin >> calc.op;

    return calc;
}

void calcInfo(stCalc calc){
    switch(calc.op){

        case '+':
            cout << "Addition will be : " << (calc.num1 + calc.num2) << endl;
            break;

        case '-':
            cout << "Subtraction will be : " << (calc.num1 - calc.num2) << endl;
            break;

        case '/':
            cout << "Divition will be : " << (calc.num1 / calc.num2) << endl;
            break;

        case '*':
            cout << "Multiplication will be : " << (calc.num1 * calc.num2) << endl;
            break;

        default:
            cout << "I don't know this operator." << endl;
    }  
}
