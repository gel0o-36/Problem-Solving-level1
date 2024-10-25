#include <iostream>
using namespace std;

struct stNum{
    float num[3];
};

stNum readNumbers();
void printSum(stNum num);


int main(){

    printSum(readNumbers());

    system("pause");
    return 0;
}

stNum readNumbers(){
    stNum num;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter number " << i  << " : " ;
        cin >> num.num[i - 1];
    }

    return num;
}

void printSum(stNum num){
    float sum = 0;
    for (int i = 1; i <= 3; i++)
    {
        sum = sum + num.num[i - 1];
    }

    cout << sum << endl;
}
