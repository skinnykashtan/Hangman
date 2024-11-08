#include "../include/Session.h"

std::string_view Session::getWord() const {
    return word;
}

std::string_view Session::getGuessedLetters() const {
    return guessedLetters;
}

void Session::setGuessedLetters(char letter) {
    guessedLetters += letter;
}

std::string_view Session::getWrongGuesses() const {
    return wrongGuesses;
}

void Session::setWrongGuess(char letter) {
    for (size_t i = 0; i < wrongGuesses.size() + 1; ++i) {
        wrongGuesses[i] = wrongGuesses[i + 1];
    }
    wrongGuesses[wrongGuesses.size() - 1] = letter;
}

bool Session::allGuessesUsed() const {
    return wrongGuesses.find('+') == std::string::npos;
}

bool Session::hasUserWon() const {
    return word.find_first_not_of(guessedLetters) == std::string::npos;
}
