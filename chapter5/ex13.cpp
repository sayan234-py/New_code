#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] Write a program to compute the sum of all elements from 1 to n using both a for loop and verify with the formula n*(n+1)/2.\033[0m" << std::endl;

    int no;
    cin >> no;

    int loopSum = 0;

    for (int i = 0; i < no+1; i++)
    {
        loopSum += i;
    }
    int formula = no*(no+1)/2;

    std::cout << "Loop Sum = "<< loopSum << std::endl;
    std::cout << "Formula Sum = "<< formula << std::endl;

    if (loopSum == formula)
    {
        std::cout << "Success ! both the formula act as same" << std::endl;
    }
    else
    {
        std::cout << "Failed ! both the formula act not as same" << std::endl;
    }
    
    return 0;
}