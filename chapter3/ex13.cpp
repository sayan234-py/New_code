#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m  [Coding] Write a program using the if and else if function. \033[0m" << std::endl <<std::endl;
    int age;
    std::cout << "Enter the age: " ;
    cin >> age;

    if (age > 100)
    {
        std::cout << "You are very old." << std::endl;
    }
    else if (age > 18)
    {
        std::cout << "You are now an adult. " << std::endl;
    }
    else if (age > 50)
    {
        std::cout << "You are are at your mid age. " << std::endl;
    }
    
    return 0;
}