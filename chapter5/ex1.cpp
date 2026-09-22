#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding] Write a program to print numbers from 1 to 50 using a for loop.\033[0m" << std::endl;

    int limit;
    std::cout << "Enter the limit of number: ";
    cin >> limit;

    for (int i = 1; i < limit+1; i++)
    {
        if (limit < 1 )
        {
            std::cout << "wrong entry...." << std::endl;
        }
        else
        {
            std::cout << i << std::endl;
        }
        
        
    }
    
    return 0;
}