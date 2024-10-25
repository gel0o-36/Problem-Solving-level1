#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

enum enMark{
    pass = 1, fail = 2
};



short readMark();
enMark checkMark(short mark);
void printMark(short mark);

int main(){

    printMark(readMark());
    system ("pause");
    return 0;
}

short readMark(){
    short mark;
    while (true)
    {
        cout << "Enter your mark : ";
        cin >> mark;
        if (mark > 0)
            break;
        else
            cout << "Please enter a positive number.\n";
    }
    
    
    return mark;
}

enMark checkMark(short mark){
    if (mark >= 50)
        return enMark::pass; 
    else
        return enMark::fail;
}
void printMark(short mark){
    if ( checkMark(mark) == enMark::pass){
        cout << "Pass." << endl;
    }
    else{
        cout << "Fail." << endl;

    }
}
