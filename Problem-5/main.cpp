#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct stInfo{
    char drivingLicence, Recommendation;
    short Age ;
    
};
stInfo readInfo();
bool checkInfo(stInfo info);
void printInfo(stInfo info);
int main(){

    printInfo(readInfo());

    cout << "\n";
    system ("pause");
    return 0;
}

stInfo readInfo(){

    stInfo info;
    cout << "Enter your Age : ";
    cin >> info.Age;

    cout << "Do you have a driving licence? (Y = Yes, N = No) : ";
    cin >> info.drivingLicence;

    cout << "Do you have a recommendation? (Y = Yes, N = No) : ";
    cin >> info.Recommendation;

    return info;
}

bool checkInfo(stInfo info){
    if (info.Recommendation == 'y'|| info.Recommendation == 'Y')
    {
        return true;
    } else{
    return (info.Age >= 21 && (info.drivingLicence == 'Y' || info.drivingLicence == 'y'));
    }
    
}

void printInfo(stInfo info){

    if (checkInfo(info))
    {
        cout << "Qualified.";
    }else{
        cout << "Not qualified.";
    }
        
    
}