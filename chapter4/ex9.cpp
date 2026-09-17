#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m [Coding] Write a program that takes three side lengths and determines whether they can form a valid triangle.\033[0m\n\n";

    double bigside;
    double side1;
    double side2;

    std::cout << "Enter the bigger side: ";
    std::cin >> bigside;

    std::cout << "Enter the first side: ";
    std::cin >> side1;

    std::cout << "Enter the second side: ";
    std::cin >> side2;

    if (side1 + side2 > bigside)
    {
        std::cout << "Yes definately it can form a perfect triangle !! because "<< side1+side2 <<" which is bigger than "<< bigside << std::endl;
    }
    else
    {
        std::cout << "\033[31m No!! definately it cann't form a perfect triangle !! because "<< side1+side2 <<" which is lesser than "<< bigside << "\033[0m" << std::endl;
    }
    
    
    return 0;
}