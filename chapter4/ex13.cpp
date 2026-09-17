#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    std::cout << "\033[33m [Coding] Write a program to check if a character entered is uppercase, lowercase, or a digit.\033[0m\n";

    char chrr;
    cin >> chrr;

    if (islower(chrr))
    {
        std::cout << "It is lowercase.." << std::endl;
    }
    else if (isupper(chrr))
    {
        std::cout << "It is uppercase.." << std::endl;
    }
    if (isdigit(chrr))
    {
        std::cout << "It is digit.." << std::endl;
    }
    
    
    
    return 0;
}
