#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m [Coding] Write a program that reads two integers as literals and swaps them using arithmeticoperators (no third variable, no XOR).\033[0m" << std::endl;

    int a;
    int b;

    std::cout << "Enter the number 1: " ;
    cin >>a;
    std::cout << "Enter the number 2: " ;
    cin >>b;
    std::cout << "Before swap The numbers are" << a << " and " << b << std::endl;

    a = a + b;   // a now holds sum of both
    b = a - b;   // b becomes original a
    a = a - b;   // a becomes original b
    std::cout << "After swap the numbera are: " <<a << " and " << b << std::endl;
    return 0;
}