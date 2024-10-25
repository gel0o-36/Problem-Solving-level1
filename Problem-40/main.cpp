#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Bill{
    float billValue, service, tax;
};

Bill readBill(); 
void printBill(Bill bill);

int main(){

    printBill(readBill());

    system ("pause");
    return 0;
}

Bill readBill(){
    Bill bill;
    cout << "Enter the Bill value : ";
    cin >> bill.billValue;


    return bill;
}

float calcBill(Bill bill){
    bill.service = bill.billValue * 1.1;
    bill.tax = bill.service * 1.16;
    return bill.tax;
}
void printBill(Bill bill){
    cout << "The total value is : " << calcBill(bill) << endl;
}