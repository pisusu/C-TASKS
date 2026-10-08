#include "MicroBank.h"
#include <iostream>

using namespace std;

MicroBank::MicroBank(double microP, double bankP) : Bank(bankP) {
    microPercent = microP;
}

void MicroBank::GetPercent(double sum) {
    double totalPercent = microPercent + bankPercent;
    double result = (sum * totalPercent) / 100.0;
    cout << "Your microbank interest rate is: " << result << endl;
}