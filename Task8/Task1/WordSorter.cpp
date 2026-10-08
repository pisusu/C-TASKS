#include "WordSorter.h"
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

WordSorter::WordSorter(const string& inputPath, const string& outputPath) {
    inputFilePath = inputPath;
    outputFilePath = outputPath;
}

bool WordSorter::readWords() {
    ifstream inputFile(inputFilePath);
    if (!inputFile.is_open()) {
        cerr << "Error: Could not open file " << inputFilePath << endl;
        return false;
    }

    words.clear();
    string word;
    while (inputFile >> word && words.size() < 40) {
        if (word.length() <= 80) {
            words.push_back(word);
        }
    }

    inputFile.close();
    return true;
}

void WordSorter::sortWords() {
    sort(words.begin(), words.end());
}

bool WordSorter::writeSortedWords() {
    ofstream outputFile(outputFilePath);
    if (!outputFile.is_open()) {
        cerr << "Error: Could not open file " << outputFilePath << endl;
        return false;
    }

    for (const auto& word : words) {
        outputFile << word << endl;
    }

    outputFile.close();
    return true;
}