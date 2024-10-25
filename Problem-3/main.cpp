#include <iostream>
using namespace std;

enum enCheck {Odd = 1, even = 0};

/* -------- prototype section -------- */
int readNum();
enCheck checkType(int num);
void printType(enCheck num);
/* ---------------------------------- */

int main(){
    
    printType(checkType(readNum()));

    system("pause");
    return 0;
}


int readNum(){
    int num;
    cout << "Enter the number : ";
    cin >> num;
    return num;
}

enCheck checkType(int num){
    int result = num % 2;
    if(result == 0){
        return enCheck::even;
    }
    else{
        return enCheck::Odd;
    }
}

void printType(enCheck num2){

    switch (num2)
    {
    case enCheck::even:
        cout <<"This is an Even number." << endl;
        break;
    
    default:
        cout << "This is an Odd number." << endl;
    }
}