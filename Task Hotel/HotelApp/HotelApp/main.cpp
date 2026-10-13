#include <iostream>
#include <ctime>
#include <clocale>
#include "Menu.h"
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");;
    srand((unsigned)time(0));

    Menu menu;
    menu.run();

    return 0;
}