#ifndef HANGMAN_SESSION_H
#define HANGMAN_SESSION_H

#include "../include/WordList.h"
#include <string>

class Session {
private:
    std::string word = WordList::getRandomWord();
    std::string wrongGuesses {"++++++"};
    std::string guessedLetters {};

public:
    const std::string& getWord() const;

    const std::string& getGuessedLetters() const;

    void setGuessedLetters(char letter);

    const std::string& getWrongGuesses() const;

    void setWrongGuess(char letter);

    bool allGuessesUsed() const;

    bool hasUserWon() const;
};

#endif
