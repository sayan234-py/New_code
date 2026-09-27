#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] Write a program to check whether a given number is prime using a for loop.\033[0m" << std::endl;

    bool isprime = true;
    int no;
    cin >> no;

    if (no == 2)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            isprime = false;
            break;
        }
        
    }
    }
    if (isprime)
    {
        std::cout << "This no is  a prime no.." << std::endl;
    }
    else
    {
        std::cout << "This no is not a prime no.." << std::endl;
    }
    
    
    
    return 0;
}