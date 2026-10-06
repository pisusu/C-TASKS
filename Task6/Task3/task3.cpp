#include "IPhone.h"
#include "Xiaomi.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    IPhone phone1(6.1, 3.46);
    Xiaomi phone2(6.67, 3.20);

    string(IPhone:: * ShowIphonePtr)() = &IPhone::ShowIphone;
    string(Xiaomi:: * ShowXiaomiPtr)() = &Xiaomi::ShowXiaomi;

    cout << (phone1.*ShowIphonePtr)() << endl;
    cout << (phone2.*ShowXiaomiPtr)() << endl;

    return 0;
}