#include <iostream>
#include <iomanip>
#include <cmath>
#include <chrono>  // Include the chrono library for timing

using namespace std;
using namespace std::chrono;  // Namespace for chrono types

enum enNum { num1 = 1, num2 = 2, num3 = 3, Equal = 4 };

struct stNum {
    float Num[3];
};

/* ---------- ProtoType Section ---------- */
void readInfo(stNum& Num);
enNum compareInfo(stNum Num);
void printInfo(stNum num, long long &durationPrint);
/* --------------------------------------- */

int main() {
    stNum Num;

    // Start timing the entire program
    auto start = high_resolution_clock::now();
    
    // Measure time for reading input
    auto startRead = high_resolution_clock::now();
    readInfo(Num);
    auto endRead = high_resolution_clock::now();
    auto durationRead = duration_cast<microseconds>(endRead - startRead);
    cout << "Time taken to read info: " << durationRead.count() << " microseconds\n";

    // Measure time for printing info (including comparison)
    long long durationPrint;  // Variable to store print duration
    auto startPrint = high_resolution_clock::now();
    printInfo(Num, durationPrint);
    auto endPrint = high_resolution_clock::now();
    durationPrint = duration_cast<microseconds>(endPrint - startPrint).count();  // Store the duration

    // End timing the entire program
    auto end = high_resolution_clock::now();
    auto totalDuration = duration_cast<microseconds>(end - start);
    
    // Print the timings after showing results
    cout << "Time taken to compare and print info: " << durationPrint << " microseconds\n";
    cout << "Total execution time: " << totalDuration.count() << " microseconds\n";

    system("pause");
    return 0;
}

void readInfo(stNum& Num) {
    for (int i = 1; i <= 3; i++) {
        cout << "Enter Number " << i << " : ";
        cin >> Num.Num[i - 1];
    }
}

enNum compareInfo(stNum Num) {
    if (Num.Num[0] > Num.Num[1] && Num.Num[0] > Num.Num[2]) {
        return enNum::num1;
    }
    else if (Num.Num[1] > Num.Num[0] && Num.Num[1] > Num.Num[2]) {
        return enNum::num2;
    }
    else if (Num.Num[2] > Num.Num[0] && Num.Num[2] > Num.Num[1]) {
        return enNum::num3;
    }
    else {
        return enNum::Equal;
    }
}

void printInfo(stNum num, long long &durationPrint) {
    enNum result = compareInfo(num);

    if (result == enNum::num1) {
        cout << "Number " << num.Num[0] << " is the greatest number.\n";
    }
    else if (result == enNum::num2) {
        cout << "Number " << num.Num[1] << " is the greatest number.\n";
    }
    else if (result == enNum::num3) {
        cout << "Number " << num.Num[2] << " is the greatest number.\n";
    }
    else {
        cout << "All numbers are equal.\n";
    }
}
