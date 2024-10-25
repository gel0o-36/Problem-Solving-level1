#include <iostream>
using namespace std;

struct stInfo{
    short Age;
    char drivingLicense;
};

stInfo readInfo();
bool isAccepted(stInfo info);
void printInfo(stInfo info);





int main(){


printInfo(readInfo());

    system("pause");
    return 0;
}


stInfo readInfo(){
    stInfo info;
    cout << "Enter your age : ";
    cin >> info.Age;

    cout << "Do you have Driving licence? (Y : Yes, N : No) : ";
    cin >> info.drivingLicense;

    return info;

}

bool isAccepted(stInfo info){
    return (info.Age >= 21 && (info.drivingLicense == 'y' || info.drivingLicense == 'Y'));
}

void printInfo(stInfo info){
    if (isAccepted(info))
    {
        cout << "Qualified.\n";
    }else{
        cout << "Not qualifed\n";
    }
}