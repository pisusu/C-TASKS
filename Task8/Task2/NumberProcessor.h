#ifndef NUMBER_PROCESSOR_H
#define NUMBER_PROCESSOR_H

#include <string>

class NumberProcessor {
private:
    std::string inputFilePath;
    std::string outputFilePath;

public:
    NumberProcessor(const std::string& inputPath, const std::string& outputPath);

    bool writeInitialNumber(double number);
    bool processAndCalculate();
};

#endif