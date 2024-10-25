#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

short readInfo();
bool checkInfo(short age);
void printInfo(short age);

int main(){

    printInfo(readInfo());


    system ("pause");
    return 0;
}

short readInfo(){
    short age;
    
    while(true){
        cout << "Enter your age : ";
        cin >> age;
        
        if (age > 0)
        {
            break;
        }else{
            cout << "Please enter a valid age." << endl;
        }
    }
        return age;
}

bool checkInfo(short age){
    return (age >= 21 && age <= 45);
}

void printInfo(short age){
    if (checkInfo(age) == true)
        cout << "Approved.\n";
    else
        cout << "Rejected.\n";
}