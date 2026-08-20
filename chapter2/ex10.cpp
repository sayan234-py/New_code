#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding] Write a program demonstrating the difference between `x++` and `++x` by printing both results.\033[0m"<<std::endl;

    std::cout << "\033[32m `X++` means post increment, it first store the value and then incement.`++X` means pre increment means it first store the value and then increment.\033[0m"<< std::endl;
    
    std::cout << "\033[33m In an example we see the the bellow options \033[0m"<<std::endl;

    int x = 5;
    x++;
    std::cout << x << std::endl;
    ++x;
    std::cout << x << std::endl;
    return 0;
}