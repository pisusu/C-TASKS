#include "Account.h"
#include <iostream>

using namespace std;

// Инициализация статического поля
double Account::totalMoneyInCash = 0.0;

Account::Account(double initialBalance, string name) {
    accountName = name;
    balance = initialBalance;
    expense = 0.0;
    income = 0.0;
    remainder = initialBalance;

    // Конструктор добавляет сальдо к "ВсегоДенегВКассе"
    totalMoneyInCash += initialBalance;
}

void Account::addExpense(double amount) {
    expense += amount;
    remainder -= amount;
    totalMoneyInCash -= amount;
}

void Account::addIncome(double amount) {
    income += amount;
    remainder += amount;
    totalMoneyInCash += amount;
}

void Account::printInfo() const {
    cout << "Account: " << accountName << endl;
    cout << "Balance (Saldo): " << balance << endl;
    cout << "Income: " << income << endl;
    cout << "Expense: " << expense << endl;
    cout << "Remainder: " << remainder << endl;
    cout << "---------------------------------------" << endl;
}

double Account::getTotalMoneyInCash() {
    return totalMoneyInCash;
}