//
// Created by Thabang Mokeona on 2024/02/16.
//


#include <iostream>
#include <cctype>
#include <vector>
#include "CharInfo.h"
#include "Counter.h"

namespace MKNTHA093 {

    void WC() {
        std::string line;
        int lineCount = 0;
        int wordCount = 0;
        int charCount = 0;

        std::vector<CharInfo> charFrequency(256, {'\0', 0});

        while (std::getline(std::cin, line)) {
            lineCount++;

            bool inWord = false;
            for (char c : line) {
                if (std::isalnum(c)) {
                    if (!inWord) {
                        wordCount++;
                        inWord = true;
                    }
                    charCount++;
                    charFrequency[std::tolower(c)].character = std::tolower(c); // Convert to lowercase
                    charFrequency[std::tolower(c)].count++;
                } else {
                    inWord = false;
                }
            }
        }
        std::cout << lineCount << " " << wordCount << " " << charCount << " ";
        printCharFrequency(charFrequency);
    }
}