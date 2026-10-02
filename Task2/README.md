2 работа
Тельнихин А.В
Вариант: 4




Задание 1. Вычисление функции в цикле




#include <iostream>
#include <math.h>

using namespace std;

int main() {
    double a, b, x, res;

    // 1. Ввод двух чисел
    cin >> a >> b;

    // 2. Поиск большего числа
    if (a > b) {
        x = a;
    }
    else {
        x = b;
    }

    // 3. Вычисление функции (Вариант 4)
    res = pow(2, x);

    // 4. Вывод результата
    cout << "x = " << x << endl;
    cout << "F(x) = " << res << endl;

    return 0;
}




Задание 2. Коммуникация в отдельной функции





#include <iostream>
#include <math.h>

using namespace std;

double calculateF(double x) {
    return pow(2, x);
}

void process() {
    double x;
    int choice;

    do {
        cout << "Enter x: ";
        cin >> x;

        double res = calculateF(x);
        cout << "F(x) = " << res << endl;

        cout << "Continue? (1 - yes, 0 - no): ";
        cin >> choice;
        cout << "--------------------" << endl;

    } while (choice == 1);
}

int main() {
    process();
    return 0;
}




Задание 3. Рекурсивная функция подсчета суммы




#include <iostream>
#include <math.h>

using namespace std;

double calculateF(double x) {
    return pow(2, x);
}

double processRecursive() {
    double x;
    int choice;

    cout << "Enter x: ";
    cin >> x;

    double currentResult = calculateF(x);
    cout << "F(x) = " << currentResult << endl;

    cout << "Continue? (1 - yes, 0 - no): ";
    cin >> choice;
    cout << "--------------------" << endl;

    if (choice == 1) {
        return currentResult + processRecursive();
    }

    return currentResult;
}

int main() {
    double totalSum = processRecursive();
    cout << "Total Sum of F(x) = " << totalSum << endl;

    return 0;
}

