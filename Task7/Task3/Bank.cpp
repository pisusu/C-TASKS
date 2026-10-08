#include "Bank.h"
#include <iostream>

using namespace std;

Bank::Bank(double percent) {
    bankPercent = percent;
}

void Bank::GetPercent(double sum) {
    double result = (sum * bankPercent) / 100.0;
    cout << "Your bank interest rate is: " << result << endl;
}