#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] Write a program to reverse the digits of a given integer using a while loop.\033[0m" << std::endl;

    int input;
    int orino;
    std::cout << "Enter a three digit number: ";
    cin >> input;
    orino = input;

    int rem = 0;
    int rev = 0;
    while (input > 0)
    {
        rem = input % 10;
        rev = (rev * 10)+ rem;
        input /= 10;
    }

    std::cout << "the original digits is: " << orino << " and reversed is = "<< rev <<"\n";
    

    return 0;
}