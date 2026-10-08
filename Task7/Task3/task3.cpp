#include "Bank.h"
#include "MicroBank.h"
#include <iostream>

using namespace std;

int main() {
    double sum = 50000.0;

    // Указатели на базовый класс для проверки полиморфизма
    Bank* baseBank = new Bank(5.0);
    Bank* microBank = new MicroBank(2.5, 5.0);

    cout << "Calculating interest for sum: " << sum << endl;
    cout << "---------------------------------------" << endl;

    baseBank->GetPercent(sum);
    microBank->GetPercent(sum);

    delete baseBank;
    delete microBank;

    return 0;
}