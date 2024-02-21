//
// Created by Thabang Mokoena on 2024/02/17.
//

#ifndef WORDCOUNTER_CHARINFO_H
#define WORDCOUNTER_CHARINFO_H

namespace MKNTHA093 {

    struct CharInfo {
        char character;
        long count;

    };

    void printCharFrequency(const std::vector<CharInfo> &charFrequency);

}
#endif //WORDCOUNTER_CHARINFO_H
