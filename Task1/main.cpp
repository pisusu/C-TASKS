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