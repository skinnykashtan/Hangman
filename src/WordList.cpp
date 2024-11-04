#include "../include/WordList.h"
#include "../include/Random.h"

namespace WordList {
    std::vector<std::string> words {"art", "chemistry", "carbonara", "history", "spaghetti", "necklace", "pretty", "super", "school"};

    std::string getRandomWord() {
        auto randomIdx = Random::get<std::size_t>(0, words.size()-1);
        return words[randomIdx];
    }
}
