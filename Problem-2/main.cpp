#include <iostream>
using namespace std;

string readName();
void printName(string name);

int main(){
    
    printName(readName());

    system("pause");
    return 0;
}

string readName(){
    string name;
    cout << "Enter your full name here : ";
    getline(cin, name);
    return name;
}
void printName(string name){
    cout << "Your Full nmae is --> " << name << endl;
}