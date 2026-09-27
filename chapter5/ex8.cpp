#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] Write a program to print a multiplication table for a given number from 1 to 10\033[0m" << std::endl;

    int num;
    std::cout << "Enter the number of multipy: ";
    cin >> num;

    for (int i = 1; i < 11; i++)
    {
        std::cout << num <<" X " << i << " = " << num * i << std::endl;
    }
    
    return 0;
}