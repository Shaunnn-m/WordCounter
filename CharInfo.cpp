//
// Created by Thabang Mokoena on 2024/02/17.
//

#include <vector>

#include <iostream>
#include "CharInfo.h"


namespace MKNTHA093 {
    void printCharFrequency(const std::vector<CharInfo> &charFrequency) {
        std::cout << "[";
        for (int i = 0; i < charFrequency.size(); ++i) {
            if (charFrequency[i].count > 0) {
                std::cout << charFrequency[i].character << ":" << charFrequency[i].count << " ";
            }
        }
        std::cout << "]" << std::endl;
    }
}