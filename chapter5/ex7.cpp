#include<iostream>
using namespace std;

int main()
{
    cout << "\033[33m[Coding] Write a program to find the sum of digits of a number using a loop.\033[0m"<< endl;

    int input;
    std::cout << "Enter a number: ";
    cin >> input;

    int sum = 0;
    while (input != 0)
    {
        sum += input % 10;
        input /= 10;
    }

    std::cout << "The sum of the digits is: " << sum << std::endl;
    
    return 0;
}