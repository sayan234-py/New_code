#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] Write a program to find the GCD of two numbers using a while loop (Euclideanalgorithm).\033[0m" << std::endl;

    int a;
    int b;

    cin >> a >> b;

    while (b != 0)
    {
       int rem = a % b;
       a = b;
       b = rem;
    }
    
    std::cout << "GCD " << a << std::endl;
    
    int lcm = (a > b) ? a : b;

    while (true) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm++;
    }

    cout << "LCM = " << lcm << endl;
    return 0;
}