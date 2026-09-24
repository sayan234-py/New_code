#include<iostream>
using namespace std;

int main()
{
     std::cout << "\033[33m[Coding] Write a program to print the sum of numbers from 1 to n using a for loop.\033[0m" << std::endl;

    int no;
    cin >> no;
    int sum = 0;
    for (int i = 0; i <= no; i++)
    {
        sum += i;
    }
    
    std::cout << sum << std::endl;
    return 0;
}