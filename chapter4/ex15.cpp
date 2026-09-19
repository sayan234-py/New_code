#include <iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m [Coding] Write a program to check whether a given number is prime using conditional logic (no loop, for numbers up to 20 using nested ifs is acceptable, or state loop needed).\033[0m\n";

    int no;
    std::cout << "Ent the number 1- 20: ";
    cin >> no;

    if (no > 20)
    {
        std::cout << "Please choose a number between 1 to 20...." << std::endl;
    }
    else if (no == 2 || no == 3 || no == 5 || no == 7 ||
             no == 11 || no == 13 || no == 17 || no == 19)
    {
        cout << "Prime number." << endl;
    }
    else
    {
        cout << "Not a prime number." << endl;
    }

    return 0;
}