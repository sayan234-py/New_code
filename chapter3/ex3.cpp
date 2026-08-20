#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m  [Coding] Write a program that reads three integers on one line separated by spaces and prints their sum.\033[0m" << std::endl <<std::endl;
    int a , b, c;
    std::cout << "Enter the three by using space: ";
    cin >>a >>b >>c;
    int total = a+ b + c;
    std::cout << "The sum of three integer is :"<< total << std::endl;
    
    return 0;
}