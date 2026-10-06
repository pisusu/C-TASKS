Задание 1  ( класс Car )




#include <iostream>
#include <string>

using namespace std;

class Car {
private: // Инкапсуляция
    string name;
    int speed;

public:
    Car() {
        name = "";
        speed = 0;
    }

    Car(string n, int s) {
        name = n;
        speed = s;
    }

    // Геттеры
    string getName() { return name; }
    int getSpeed() { return speed; }

    // Операторы сравнения
    bool operator==(Car second) {
        return (name == second.name && speed == second.speed);
    }

    bool operator<(Car second) {
        return (speed < second.speed);
    }

    bool operator>(Car second) {
        return (speed > second.speed);
    }
};

int main() {
    Car c1("BMW", 250);
    Car c2("Audi", 220);

    cout << "Car 1: " << c1.getName() << ", Speed: " << c1.getSpeed() << endl;
    cout << "Car 2: " << c2.getName() << ", Speed: " << c2.getSpeed() << endl;

    if (c1 > c2) {
        cout << c1.getName() << " is faster!" << endl;
    }

    return 0;
}




Задание 2 ( класс Account)




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