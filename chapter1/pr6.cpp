#include<iostream>
using namespace std ;

int main() {
    
    std::cout << "\033[31mQuestion.Write a program to print a simple ASCII art box using multiple cout statements.\033[0m" << std::endl;
    
    std::cout << "\033[32m";
    std::cout << "+-----------------+" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "|     ASCII       |" << std::endl;
    std::cout << "|    art box      |" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "|                 |" << std::endl;
    std::cout << "+-----------------+" << std::endl;
    std::cout << "\033[0m";

    return 0;
}
