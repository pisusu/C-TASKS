#include "Account.h"
#include <iostream>

using namespace std;

int main() {
    Account acc1(10000.0, "Main Account");
    Account acc2(5000.0, "Secondary Account");

    cout << "Initial Total Money in Cash: " << Account::getTotalMoneyInCash() << endl;
    cout << "---------------------------------------" << endl;

    acc1.addIncome(2000.0);
    acc1.addExpense(1500.0);

    acc1.printInfo();

    cout << "Updated Total Money in Cash: " << Account::getTotalMoneyInCash() << endl;

    return 0;
}