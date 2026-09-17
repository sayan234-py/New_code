#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding] Write a program that outputs the current program's purpose as a comment, then prints 'Program started' and 'Program ended'\033[0m" << std::endl;
    

    std::cout << "\033[32m {Program started} This program is for printing netural numbers from 1 to 5 not using any loop. \033[0m"<< std::endl;
    std::cout << " 1 "<< std::endl;
    std::cout << " 2 "<< std::endl;
    std::cout << " 3 "<< std::endl;
    std::cout << " 4 "<< std::endl;
    std::cout << " 5 "<< std::endl;

    std::cout << " {Program ended } "<< std::endl;

    
    return 0;
}