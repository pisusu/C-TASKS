#ifndef XIAOMI_H
#define XIAOMI_H

#include <string>

class Xiaomi {
private:
    double diagonal;
    double cpuFrequency;

public:
    Xiaomi(double d, double f);

    std::string ShowXiaomi();
};

#endif