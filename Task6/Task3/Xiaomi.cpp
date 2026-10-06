#include "Xiaomi.h"

using namespace std;

Xiaomi::Xiaomi(double d, double f) {
    diagonal = d;
    cpuFrequency = f;
}

string Xiaomi::ShowXiaomi() {
    return "Phone type: Xiaomi | Diagonal: " + to_string(diagonal) +
        " | CPU Frequency: " + to_string(cpuFrequency) + " GHz";
}