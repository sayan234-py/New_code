#include<iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "\033[33m[Coding] Write a program to check if a given input character is an alphabet, and if so, whether it is a vowel.\033[0m\n";

    char input;
    std::cout << "Enter a single input: ";
    cin >> input;

    if (tolower(input) == 'a' || tolower(input) == 'e' ||
        tolower(input) == 'i' || tolower(input) == 'o' ||
        tolower(input) == 'u')
    {
        cout << "It's a vowel!!";
    }
    else if (isalpha(input))
    {
        std::cout << "It'a a Alphabet" << std::endl;
    }
    else
    {
       std::cout << "It's a anything else.." << std::endl; 
    }
    
    return 0;
}