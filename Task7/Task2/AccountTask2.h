#ifndef ACCOUNT_TASK2_H
#define ACCOUNT_TASK2_H

#include <string>

class AccountTask2 {
private:
    std::string accountName;
    double balance;
    double expense;
    double income;
    double remainder;

    static double totalMoneyInCash;

public:
    AccountTask2(double initialBalance, std::string name = "Default Account");

    void addExpense(double amount);
    void addIncome(double amount);

    void printInfo() const;
    static double getTotalMoneyInCash();

    // Статическая функция из Задания 2
    static std::string getWelcomeMessage();
};

#endif