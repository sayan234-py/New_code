#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] Write a program to print all Armstrong numbers between 1 and 500 using loops\033[0m" << std::endl;


    int input;
    
    
    cin >> input;

    for (int i = 1; i <= input; i++)
    {
        int res = 0;
        int rem = 0;
        int temp = i;
        while (temp != 0)
        {
            rem = temp % 10;
            res += rem * rem * rem;
            temp /= 10;
        }
        if (res == i)
        {
            std::cout << i <<" " << std::endl;
        }
        
    }
    
    return 0;
}