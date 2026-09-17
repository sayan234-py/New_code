#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    const int secretNumber = (std::rand() % 100) + 1;
    int guess = 0;
    int tries = 0;

    std::cout << "\033[33mNumber Guessing Game\033[0m\n"
              << "I'm thinking of a number from 1 to 100.\n\n";

    do {
        std::cout << "Enter your guess: ";
        if (!(std::cin >> guess)) {
            std::cout << "Please enter a valid number.\n";
            return 1;
        }
        ++tries;

        if (guess < secretNumber) {
            std::cout << "Too low. Try again.\n";
        } else if (guess > secretNumber) {
            std::cout << "Too high. Try again.\n";
        } else {
            std::cout << "Correct! You found it in " << tries << " tries.\n";
        }
        
        
        

    } while (guess != secretNumber);

    return 0;
}
