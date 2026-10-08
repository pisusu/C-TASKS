#include "AccountTask2.h"
#include <iostream>

using namespace std;

double AccountTask2::totalMoneyInCash = 0.0;

AccountTask2::AccountTask2(double initialBalance, string name) {
    accountName = name;
    balance = initialBalance;
    expense = 0.0;
    income = 0.0;
    remainder = initialBalance;

    totalMoneyInCash += initialBalance;
}

void AccountTask2::addExpense(double amount) {
    expense += amount;
    remainder -= amount;
    totalMoneyInCash -= amount;
}

void AccountTask2::addIncome(double amount) {
    income += amount;
    remainder += amount;
    totalMoneyInCash += amount;
}

void AccountTask2::printInfo() const {
    cout << "Account: " << accountName << endl;
    cout << "Balance (Saldo): " << balance << endl;
    cout << "Income: " << income << endl;
    cout << "Expense: " << expense << endl;
    cout << "Remainder: " << remainder << endl;
    cout << "---------------------------------------" << endl;
}

double AccountTask2::getTotalMoneyInCash() {
    return totalMoneyInCash;
}

string AccountTask2::getWelcomeMessage() {
    return "Welcome to Our Bank!";
}