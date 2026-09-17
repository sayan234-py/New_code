#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding] Write a program that prints the sum of two hardcoded numbers, 15 and 27\033[0m" << std::endl;
    int a = 15;
    int b = 27;
    int c = a+b;
    std::cout << "Sum of " <<a << " + "<< b << " = "<< c << std::endl;
    return 0;
}