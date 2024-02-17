//
// Created by Thabang Mokeona on 2024/02/16.
//


#include <iostream>
#include <cctype>

// Function to count lines
int countLines() {
    int lineCount = 0;
    std::string line;
    while (std::getline(std::cin, line)) {
        lineCount++;
    }
    return lineCount;
}

// Function to count words
int countWords(const std::string &line) {
    int wordCount = 0;
    bool inWord = false;
    for (char c : line) {
        if (std::isalnum(c)) {
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
int countCharacters(const std::string &line) {
    int charCount = 0;
    for (char c : line) {
        if (std::isalnum(c)) {
            charCount++;
        }
    }
    return charCount;
}
