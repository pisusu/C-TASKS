#ifndef ARRAY_SWAPPER_H
#define ARRAY_SWAPPER_H

class ArraySwapper {
private:
    int* data;
    int size;

public:
    ArraySwapper(int s);
    ~ArraySwapper();

    void inputElements();
    void swapPairs();
    void printArray() const;
};

#endif