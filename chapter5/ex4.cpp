#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] Write a program to print all even numbers between 1 and 100 using a for loop\033[0m" << std::endl;

    int limit;
    int count = 0;
    long long sum = 0;
    std::cout << "Enter the limit: ";
    cin >> limit;

    for (int i = 1; i < limit+1; i++)
    {
        if (i % 2 == 0)
        {
            count ++;
            sum += i;
            std::cout <<" " <<i ;
        }
        
    }
     std::cout <<" \n" << "Total number of even number = " << count <<", And sum of the numbers is = " << sum << std::endl;

    
    return 0;
}