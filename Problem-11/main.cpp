
#include <iostream>
using namespace std;

struct stNum{
    float num[3];
};

stNum readNumbers();
float calcSum(stNum num);
float ave(stNum num);
void checkIf(stNum num);

int main(){

    checkIf(readNumbers());

    system("pause");
    return 0;
}

stNum readNumbers(){
    stNum num;

    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter Mark " << i  << " : " ;
        cin >> num.num[i - 1];
    }

    return num;
}

float calcSum(stNum num){
    float sum = 0, ave;
    for (int i = 1; i <= 3; i++)
    {
        sum = sum + num.num[i - 1];
    }
    
    return sum;
}

float ave(stNum num){
    return calcSum(num) / 3;
}

void checkIf(stNum num){

    cout << "The sum is : " << calcSum(num) << endl;
    cout << "The Average is : " << ave(num) << endl;

    if(ave(num) >= 50 ){
        cout << "Pass.\n";
    }else{
        cout << "Fail\n";
    }
}

