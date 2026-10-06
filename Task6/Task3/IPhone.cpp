#include "IPhone.h"

using namespace std;

IPhone::IPhone(double d, double f) {
    diagonal = d;
    cpuFrequency = f;
}

string IPhone::ShowIphone() {
    return "Phone type: iPhone | Diagonal: " + to_string(diagonal) +
        " | CPU Frequency: " + to_string(cpuFrequency) + " GHz";
}