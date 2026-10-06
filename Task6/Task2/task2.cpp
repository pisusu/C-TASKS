#include "Decrementer.h"
#include <iostream>

using namespace std;

int main() {
    Decrementer dec(10);

    cout << "Initial value: " << dec.getValue() << endl;

    dec.decrementByValue(dec.getValue());
    cout << "After decrementByValue(int): " << dec.getValue() << " (Unchanged)" << endl;

    cout << "---------------------------------------" << endl;

    int currentValue = dec.getValue();
    dec.decrementByPointer(&currentValue);
    dec.setValue(currentValue);

    cout << "After decrementByPointer(int*): " << dec.getValue() << " (Decremented)" << endl;

    return 0;
}