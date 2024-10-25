#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Num {int factorial, final;};

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
        cin >> num.factorial;

        if (num.factorial > 0)
            break;
        else
            cout << "Wrong input, please try a positive number.\n";
    }
    
    return num;
}

int calculateInfo(Num num){
    num.final = 1;

    for (int i = 1; i <= num.factorial; i++)
    {
        num.final = num.final * i;
    }
    
    return num.final;
}

void printInfo(Num num){
    int after = calculateInfo(num);
    cout << "The factorial of the number will be : " << after << endl;
}