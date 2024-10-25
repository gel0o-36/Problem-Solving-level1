#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){


    int n , sum = 0;
    cout << "Enter N number : ";
    cin >> n;

    for(int i = 0; i <= n; i++){

        if (i % 2 != 0)
        {
            sum = sum + i;
        }
        
    }
    cout << sum << endl;

    system ("pause");
    return 0;
}