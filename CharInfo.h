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

    std::vector<CharInfo> createCharFrequencyTable();

}
#endif //WORDCOUNTER_CHARINFO_H
