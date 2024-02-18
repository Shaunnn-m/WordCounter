//
// Created by Thabang Mokoena on 2024/02/17.
//

#include <vector>
#include <cctype>
#include <string>
#include <iostream>
#include "CharInfo.h"




std::vector<MKNTHA093::CharInfo> MKNTHA093:: createCharFrequencyTable() {

    std::vector<CharInfo> frequencyTable(256); // Assuming ASCII characters
    std::string line;

    while (std::getline(std::cin, line)) {
        for (char c: line) {
            if (std::isalnum(c)) {
                frequencyTable[c].character = c;
                frequencyTable[c].count++;
            }
        }
    }
    return frequencyTable;
}