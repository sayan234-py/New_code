#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding] Write a program to calculate the ascci value of the character. \033[0m" << std::endl <<std::endl;

    char a;
    std::cout << "Enter the character: ";
    cin >> a;

    int x = (int)a;
    std::cout << "The ASCCI value of " << a << " is: " << x << std::endl;
    return 0;
}