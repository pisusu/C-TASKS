#ifndef IPHONE_H
#define IPHONE_H

#include <string>

class IPhone {
private:
    double diagonal;
    double cpuFrequency;

public:
    IPhone(double d, double f);

    std::string ShowIphone();
};

#endif