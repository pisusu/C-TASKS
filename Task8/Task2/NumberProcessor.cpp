#include "NumberProcessor.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

NumberProcessor::NumberProcessor(const string& inputPath, const string& outputPath) {
    inputFilePath = inputPath;
    outputFilePath = outputPath;
}

bool NumberProcessor::writeInitialNumber(double number) {
    ofstream outputFile(inputFilePath);
    if (!outputFile.is_open()) {
        cerr << "Error: Could not open file " << inputFilePath << endl;
        return false;
    }

    outputFile << number << endl;
    outputFile.close();
    return true;
}

bool NumberProcessor::processAndCalculate() {
    ifstream inputFile(inputFilePath);
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open file " << inputFilePath << endl;
        return false;
    }

    double value;
    if (!(inputFile >> value)) {
        cout << "В файле строка. Необходимо число" << endl;
        inputFile.close();
        return false;
    }

    // Проверяем, нет ли лишнего текста после числа
    string remainingText;
    if (inputFile >> remainingText) {
        cout << "В файле строка. Необходимо число" << endl;
        inputFile.close();
        return false;
    }

    inputFile.close();

    double result = value * 0.50;

    ofstream outputFile(outputFilePath);
    if (!outputFile.is_open()) {
        cerr << "Error: Could not open file " << outputFilePath << endl;
        return false;
    }

    outputFile << result << endl;
    outputFile.close();

    cout << "50% of " << value << " is " << result << " (saved to " << outputFilePath << ")" << endl;
    return true;
}