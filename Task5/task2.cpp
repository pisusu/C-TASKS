#include <iostream>
#include <string>

using namespace std;

class Account {
private: // Инкапсуляция
    string name;
    double balance;
    double expense;
    double income;

public:
    Account(string n, double b) {
        name = n;
        balance = b;
        expense = 0;
        income = 0;
    }

    // Перегрузка оператора (увеличен доход на 1)
    Account& operator++() {
        income = income + 1;
        return *this;
    }

    // Перегрузка оператора (увеличен расход на 1)
    Account& operator--() {
        expense = expense + 1;
        return *this;
    }

    // Сложение с числом
    Account& operator+(double num) {
        if (num > 0) {
            income = income + num;
        }
        else {
            expense = expense + (num * -1);
        }
        return *this;
    }

    void printInfo() {
        cout << "Account: " << name << endl;
        cout << "Balance: " << balance << " | Income: " << income << " | Expense: " << expense << endl;
        cout << "-----------------------------------------------" << endl;
    }
};

int main() {
    Account myAcc("Sberbank", 10000);

    myAcc.printInfo();
    ++myAcc;
    myAcc + 5000;
    myAcc + (-2000);
    myAcc.printInfo();

    return 0;
}