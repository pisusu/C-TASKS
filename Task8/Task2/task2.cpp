#include "NumberProcessor.h"
#include <iostream>

using namespace std;

int main() {
    NumberProcessor processor("primer1.txt", "primer2.txt");

    double userNum;
    cout << "Enter a number: ";
    if (cin >> userNum) {
        processor.writeInitialNumber(userNum);
        processor.processAndCalculate();
    }
    else {
        cout << "Invalid input from console." << endl;
    }

    return 0;
}