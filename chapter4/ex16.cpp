#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m [Coding] Write a program to check whether a given number is prime  or not.\033[0m\n";

    int no;
    std::cout << "Enter the no: ";
    cin >> no;
    bool isPrime = false;

    if (no == 1)
    {
        std::cout << "It's not a prime no.." << std::endl;
    }
    else{
    for (int i = 2; i*i < no; i++)
    {
       if (no % i == 0)
       {
            isPrime = false;
            break;
       }
       else
       {
        isPrime = true;
       }
       
    }
}

if (isPrime == true)
{
    std::cout << "It's a prime no.." << std::endl;
}
else
{
        std::cout << "It's not a prime no.." << std::endl;

}


    
    
    return 0;
}