#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct stInfo {
    string firstname, lastname;
};

stInfo readFullName();
string compineName(stInfo info);
void printFullName(string name);

int main(){
    

    printFullName(compineName(readFullName()));

    cout << "\n";
    system ("pause");
    return 0;
}


stInfo readFullName(){

    stInfo info;

    cout << "Enter the first name : ";
    cin >> info.firstname;

    cout << "Enter the last name : ";
    cin >> info.lastname;

    return info;

}

string compineName(stInfo info){
    return info.firstname + " " + info.lastname ;
}

void printFullName(string name){
    cout << "Your full name is : " << name << endl;
}