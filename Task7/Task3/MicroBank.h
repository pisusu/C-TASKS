#ifndef MICRO_BANK_H
#define MICRO_BANK_H

#include "Bank.h"

class MicroBank : public Bank {
private:
    double microPercent;

public:
    MicroBank(double microP, double bankP);

    void GetPercent(double sum) override;
};

#endif