#ifndef HANGMAN_WORDLIST_H
#define HANGMAN_WORDLIST_H

#include <string>
#include <vector>

namespace WordList {
    extern std::vector<std::string> words;

    std::string getRandomWord();
}

#endif
