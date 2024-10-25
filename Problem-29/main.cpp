#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Num{
    int input, sum;
};

Num readInfo();
int calculateInfo(Num num);
void printInfo(Num num);

int main(){

    printInfo(readInfo());



    system ("pause");
    return 0;
}


Num readInfo(){
    Num num;

    while (true)
    {
        cout << "Enter a positive number : ";
        cin >> num.input;

        if (num.input > 0)
            break;
        else
            cout << "Please enter a positive number : \n";
    }

    return num;
}

int calculateInfo(Num num){
    num.sum = 0;
    
    for(int i = 0; i <= num.input; i++ ){
        if (i % 2 == 0)
        num.sum = num.sum + i;
    }

    return num.sum;
}

void printInfo(Num num){
    int final = calculateInfo(num);
    cout << "Sum of the even number will be : " << final << endl;
}

