4 работа
Тельнихин А.В

Код программы: Задание 1

#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    string text;
    char searchChar;

    cout << "Введите строку: ";
    getline(cin, text);

    cout << "Введите символ для поиска: ";
    cin >> searchChar;

    int count = 0;

    // Счет цифр в цикле
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == searchChar) {
            count = count + 1;
        }
    }

    // Вывод сообщения
    if (count > 0) {
        cout << "Данный символ встречается в строке " << count << " раз" << endl;
    } else {
        cout << "Строка не содержит символ" << endl;
    }

    return 0;
}

Код программы: Задание 2

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

    // Вывод сообщения 
    if (found == true) {
        cout << "Символ заменен" << endl;
        cout << "Итоговая строка: " << text << endl;
    } else {
        cout << "Символ не найден" << endl;
    }

    return 0;
}