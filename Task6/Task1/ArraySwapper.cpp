#include "ArraySwapper.h"
#include <iostream>

using namespace std;

ArraySwapper::ArraySwapper(int s) {
    size = s;
    data = new int[size];
}

ArraySwapper::~ArraySwapper() {
    delete[] data;
}

void ArraySwapper::inputElements() {
    for (int i = 0; i < size; i++) {
        cout << "Enter element " << (i + 1) << ": ";
        cin >> data[i];
    }
}

void ArraySwapper::swapPairs() {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = *(data + i);
        *(data + i) = *(data + i + 1);
        *(data + i + 1) = temp;
    }
}

void ArraySwapper::printArray() const {
    for (int i = 0; i < size; i++) {
        cout << *(data + i) << " ";
    }
    cout << endl;
}