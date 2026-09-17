#include <iostream>

int main()
{
    std::cout << "\033[33m[Coding] Write a program to check if a given year is a leap year.\033[0m\n\n";
    int year;

    do
    {
        std::cout << "Enter the year: ";
        std::cin >> year;

        if (year <= 0)
        {
            std::cout << "Wrong choice, choose a positive year."
                      << std::endl;
        }

    } while (year <= 0);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
    {
        std::cout << "It's a leap year!!" << std::endl;
    }
    else
    {
        std::cout << "It's not a leap year..." << std::endl;
    }

    return 0;
}