#include<iostream>
using namespace std;

int main()
{
     std::cout << "\033[33m[Coding] Write a program to calculate the factorial of a number using a while loop.\033[0m" << std::endl;

     int limit;
     long long factotial = 1;
     std::cout << "Enter the limit of the factorial: ";
     cin >> limit;


     while (limit > 0)
     {
        factotial = factotial*limit;
        limit --;
     }

     std::cout << "Factorial= "<< factotial << std::endl;
     
    return 0;
}