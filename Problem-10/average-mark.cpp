#include <iostream>
using namespace std;

struct stNum{
    float num[3];
};

stNum readNumbers();
float printSum(stNum num);
void ave(stNum num);

int main(){

    ave(readNumbers());

    system("pause");
    return 0;
}

stNum readNumbers(){
    stNum num;
    int i = 1;
    while (i <= 3)
    {
        cout << "Enter number " << i  << " : " ;
        cin >> num.num[i - 1];
        if (num.num[i - 1] >= 0)
            i++;
        else
            cout << "Invalid please try a positive number.\n";
    }

    return num;
}

float printSum(stNum num){
    float sum = 0, ave;
    for (int i = 1; i <= 3; i++)
    {
        sum = sum + num.num[i - 1];
    }
    
    return sum;
}

void ave(stNum num){
    cout << printSum(num) / 3 << endl;
}
