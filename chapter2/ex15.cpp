#include<iostream>
#include<vector>
using namespace std;

typedef long long matrix;

int main()
{
    std::cout << "\033[31m [Coding] Write a program that declares a variable of each numeric type (short, int, long, long long) and prints their sizes using sizeof.\033[0m" << std::endl <<std::endl;

    
    short s;
    int i;
    long l;
    matrix ll;

    std::cout << "Size of short: " << sizeof(s) << " bytes" << std::endl;
    std::cout << "Size of int: " << sizeof(i) << " bytes" << std::endl;
    std::cout << "Size of long: " << sizeof(l) << " bytes" << std::endl;
    std::cout << "Size of long long: " << sizeof(ll) << " bytes" << std::endl;

    return 0;
}