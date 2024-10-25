#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Bill{
    float totalBill, cashPaid, remainder;
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

    cout << "Enter the Total bill : ";
    cin >> bill.totalBill;
    cout << "Enter the Cash paid : ";
    cin >> bill.cashPaid;

    return bill;
}

float calcBill(Bill bill){
    return bill.totalBill - bill.cashPaid;
}
void printBill(Bill bill){
    bill.remainder = calcBill(bill);
    cout << "The cash left is : " << bill.remainder << endl;
}