#ifndef BANK_H
#define BANK_H

class Bank {
protected:
    double bankPercent;

public:
    Bank(double percent);
    virtual ~Bank() {}

    virtual void GetPercent(double sum);
};

#endif