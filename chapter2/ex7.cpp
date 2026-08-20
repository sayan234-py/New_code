#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding] Write a program to calculate the Character from the input of ASCCI value. \033[0m" << std::endl <<std::endl;

    int a;
    std::cout << "Enter the ASCCI value: ";
    cin >> a;

    char x = (char)a;
    std::cout << "The character of the ASCCI value  " << a << " is: " << x << std::endl;
    return 0;
}