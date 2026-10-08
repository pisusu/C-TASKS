#include "WordSorter.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string inputFile = "input_words.txt";
    string outputFile = "output_sorted.txt";

    // Создаем тестовый файл с нерассортированными словами
    ofstream testFile(inputFile);
    if (testFile.is_open()) {
        testFile << "Banana\nApple\nCherry\nDate\nElderberry\n";
        testFile.close();
    }

    WordSorter sorter(inputFile, outputFile);

    if (sorter.readWords()) {
        sorter.sortWords();
        if (sorter.writeSortedWords()) {
            cout << "Words successfully sorted and written to " << outputFile << endl;
        }
    }

    return 0;
}