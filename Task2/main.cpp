#include <iostream>
#include <math.h>

using namespace std;

// Математическая функция F(x) = 2^x
double calculateF(double x) {
    return pow(2, x);
}

// Рекурсивная функция
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

    // Рекурсивный вызов
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