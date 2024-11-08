#ifndef HANGMAN_SESSION_H
#define HANGMAN_SESSION_H

#include "../include/WordList.h"
#include <string>
#include <string_view>

class Session {
private:
    std::string word = WordList::getRandomWord();
    std::string wrongGuesses {"++++++"};
    std::string guessedLetters {};

public:
    [[nodiscard]] std::string_view getWord() const;

    [[nodiscard]] std::string_view getGuessedLetters() const;

    void setGuessedLetters(char letter);

    [[nodiscard]] std::string_view getWrongGuesses() const;

    void setWrongGuess(char letter);

    [[nodiscard]] bool allGuessesUsed() const;

    [[nodiscard]] bool hasUserWon() const;
};

#endif
