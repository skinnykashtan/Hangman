#include "../include/Game.h"
#include "../include/Input.h"
#include "../include/Session.h"

#include <iostream>

void gameState(const Session& s) {
    std::cout << std::endl;

    std::cout << "The word: ";
    auto word = s.getWord();
    auto length = word.size();

    for (size_t i = 0; i < length; ++i) {
        if (s.getGuessedLetters().find(word[i]) != std::string::npos) {
            std::cout << word[i];
        } else {
            std::cout << "_";
        }
    }

    std::cout << "   Wrong guesses: " << s.getWrongGuesses() << std::endl;
}

void gameLoop(const Session& s) {
    std::cout << "Welcome to Hangman" << std::endl;
    std::cout << "To win: guess the word. \tTo lose: run out of pluses." << std::endl;

    gameState(s);

    char letter {};
    while (!s.allGuessesUsed() && !s.hasUserWon()) {
        letter = getUserInput();

        if (s.getGuessedLetters().find(letter) != std::string::npos) {
            std::cout << "You already guessed that. Try again.";
        } else if (s.getWord().find(letter) != std::string::npos) {
            std::cout << "Yes, '" << letter << "' is in the word!";
        } else {
            std::cout << "No, '" << letter << "' is not in the word!";
            s.setWrongGuess(letter);
        }
        std::cout << std::endl;

        s.setGuessedLetters(letter);

        gameState(s);

        if (s.hasUserWon()) {
            std::cout << "Congratulations! You've guessed the word: " << s.getWord() << std::endl;
            break;
        }
    }

    if (s.allGuessesUsed()) {
        std::cout << "You lost! The word was: " << s.getWord() << std::endl;
    }

}