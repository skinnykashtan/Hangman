#ifndef HANGMAN_SESSION_H
#define HANGMAN_SESSION_H

#include "../include/WordList.h"
#include <string>

class Session {
private:
    std::string word = WordList::getRandomWord();
    mutable std::string wrongGuesses {"++++++"};
    mutable std::string guessedLetters {};

public:
    const std::string& getWord() const;

    const std::string& getGuessedLetters() const;

    void setGuessedLetters(char letter) const;

    const std::string& getWrongGuesses() const;

    void setWrongGuess(char letter) const;

    bool allGuessesUsed() const;

    bool hasUserWon() const;
};

#endif
