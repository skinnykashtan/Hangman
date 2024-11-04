#include "../include/Input.h"
#include <iostream>
#include <cctype>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

char getUserInput() {
    while (true) {
        std::cout << "Enter your next letter: ";
        char letter{};
        std::cin >> letter;


        if (!std::cin)
        {
            std::cin.clear();
            std::cout << "That wasn't a valid input.  Try again." << std::endl;
            ignoreLine();
            continue;
        }

        ignoreLine();

        if (std::isalpha(static_cast<unsigned char>(letter))) {
            return std::tolower(letter);
        } else {
            std::cout << "That wasn't a valid input.  Try again." << std::endl;
        }
    }
}
