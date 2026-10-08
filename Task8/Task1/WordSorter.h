#ifndef WORD_SORTER_H
#define WORD_SORTER_H

#include <string>
#include <vector>

class WordSorter {
private:
    std::string inputFilePath;
    std::string outputFilePath;
    std::vector<std::string> words;

public:
    WordSorter(const std::string& inputPath, const std::string& outputPath);

    bool readWords();
    void sortWords();
    bool writeSortedWords();
};

#endif