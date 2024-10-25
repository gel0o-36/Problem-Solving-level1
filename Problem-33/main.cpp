#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float readInfo();
void printGrade(float grade);

int main(){

    printGrade(readInfo());

    system ("pause");
    return 0;
}
float readInfo(){
    float grade;
    while (true)
    {
    cout << "Enter your grade here : ";
    cin >> grade;
    if (grade > 0 && grade < 101)
        break;
    else
        cout << "Enter a valid grade between ( 1 : 100 ).\n";
    }
    return grade;
}

void printGrade(float grade){

    if (grade <= 100 && grade >= 90)
        cout << "Your Grade is \" A \". " << endl;
    else if (grade < 90 && grade >= 80)
        cout << "Your Grade is \" B \". " << endl;
    else if (grade < 80 && grade >= 70)
        cout << "Your Grade is \" C \". " << endl;
    else if (grade < 70 && grade >= 60)
        cout << "Your Grade is \" D \". " << endl;
    else if (grade < 60 && grade >= 50)
        cout << "Your Grade is \" E \". " << endl;
    else
        cout << "Your Grade is \" F \". " << endl;
    
}