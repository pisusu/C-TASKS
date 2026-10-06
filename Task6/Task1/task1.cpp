#include "ArraySwapper.h"
#include <iostream>

using namespace std;

int main() {
    ArraySwapper swapper(6);

    swapper.inputElements();

    cout << "\nOriginal array: ";
    swapper.printArray();

    swapper.swapPairs();

    cout << "Modified array: ";
    swapper.printArray();

    return 0;
}