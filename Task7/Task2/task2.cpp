#include "AccountTask2.h"
#include <iostream>

using namespace std;

int main() {
    // Вызов статической функции без создания объекта
    cout << AccountTask2::getWelcomeMessage() << endl;
    cout << "---------------------------------------" << endl;

    AccountTask2 acc(8000.0, "Savings Account");
    acc.addIncome(3000.0);
    acc.printInfo();

    return 0;
}