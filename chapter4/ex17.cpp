#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m [Coding] Write a program to check the factorial upto n'th term.\033[0m\n";

    int limit;
    long long factorial = 1;
    std::cout << "Enter the number: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        factorial = factorial * i;

    }
    
    cout << "Factorial = " << factorial << endl;

    return 0;
}