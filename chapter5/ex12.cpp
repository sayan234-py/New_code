#include<iostream>
using namespace std;

int main()
{
    cout << "\033[33m[Coding] Write a program to print all prime numbers between 1 and 100 using nested loops.\033[0m"<< endl;
    int limit;
    cin >> limit;

    for (int i = 2; i < limit; i++)
    {
        bool isprime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isprime = false;
                break;
            }
            
        }
        if (isprime)
    {
        std::cout << i <<" ";
    }
        
    }
    
    
    
    
    
    return 0;
}