#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding]  Write a program to swap two integers without using a third variable.\033[0m" << std::endl <<std::endl;

    int a = 23;
    int b = 12;
    std::cout << "Before swapping the veriable" << std::endl <<a << std::endl <<b  << std::endl;

    a = a+b;
    b = a-b;
    a = a-b;

    std::cout << "After swapping the veriable" << std::endl <<a << std::endl <<b  << std::endl;
    return 0;
}