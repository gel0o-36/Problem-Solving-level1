/*
    1- read a number from the user
    2- create a variable and insert the user input divided by 2 in it 
    3- print out the variable
*/
#include <iostream>
using namespace std;

struct stNum{
    float num, halfNum;
};

stNum readNum();
float halfNum(stNum Num);
void printNum(float num);

int main(){

    printNum(halfNum(readNum()));

    system("pause");
    return 0;
}

stNum readNum(){
    stNum Num;
    cout << "Enter the number here : ";
    cin >> Num.num;
    return Num;
}

float halfNum(stNum Num){
    Num.halfNum = Num.num / 2 ;
    return Num.halfNum;
}

void printNum(float num){
    cout << "Half of the number is : " << num << endl;
}