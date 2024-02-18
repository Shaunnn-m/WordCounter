//
// Created by Thabang Mokeona on 2024/02/16.
//


#include <iostream>
#include <cctype>
#include "Counter.h"

// Function to count lines
int MKNTHA093::countLines() {
    int lineCount = 0;
    std::string line;
    while (std::getline(std::cin, line)) { //for each line read increment lineCount
        lineCount++;
    }
    return lineCount;
}

// Function to count words
int MKNTHA093::countWords(const std::string &line) {
    int wordCount = 0;
    bool inWord = false;
    for (char c : line) {
        if (std::isalnum(c)) { // check is if word is alphanumeric
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }
    return wordCount;
}

// Function to count characters
int MKNTHA093::countCharacters(const std::string &line) {
    int charCount = 0;
    for (char c : line) {
        if (std::isalnum(c)) {
            charCount++;
        }
    }
    return charCount;
}
