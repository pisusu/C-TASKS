#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string text;
    char char1, char2;

    cout << "Введите строку: ";
    getline(cin, text);

    cout << "Введите символ 1 (для поиска): ";
    cin >> char1;

    cout << "Введите символ 2 (для замены): ";
    cin >> char2;

    bool found = false; // Флаг: был ли найден хотя бы один символ

    for (int i = 0; i < text.length(); i++) {
        if (text[i] == char1) {
            text[i] = char2; // Замена
            found = true;
        }
    }

    // Вывод сообщения по ТЗ
    if (found == true) {
        cout << "Символ заменен" << endl;
        cout << "Итоговая строка: " << text << endl;
    }
    else {
        cout << "Символ не найден" << endl;
    }

    return 0;
}
