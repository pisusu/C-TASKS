#ifndef DECREMENTER_H
#define DECREMENTER_H

class Decrementer {
private:
    int value;

public:
    Decrementer(int initialValue);

    void decrementByValue(int x);
    void decrementByPointer(int* x);

    int getValue() const;
    void setValue(int val);
};

#endif