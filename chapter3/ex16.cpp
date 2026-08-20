#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m  [Coding] Write a program using ternary operator to perform some basic operations.\033[0m" << std::endl <<std::endl;

    int number;
    std::cout << "Enter the number: ";
    cin >>number;
    number%2==0 ? std::cout << "This is an EVEN number." : std::cout << "This is an ODD number." << std::endl;
    return 0;
}