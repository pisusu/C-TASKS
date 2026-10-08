#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

class Account {
private:
    std::string accountName;
    double balance; // Сальдо
    double expense; // Расход
    double income;  // Доход
    double remainder; // Остаток

    // Статическое поле
    static double totalMoneyInCash;

public:
    Account(double initialBalance, std::string name = "Default Account");

    void addExpense(double amount);
    void addIncome(double amount);

    void printInfo() const;
    static double getTotalMoneyInCash();
};

#endif