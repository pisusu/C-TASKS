#include "Decrementer.h"

Decrementer::Decrementer(int initialValue) {
    value = initialValue;
}

void Decrementer::decrementByValue(int x) {
    x--;
}

void Decrementer::decrementByPointer(int* x) {
    if (x != nullptr) {
        (*x)--;
    }
}

int Decrementer::getValue() const {
    return value;
}

void Decrementer::setValue(int val) {
    value = val;
}