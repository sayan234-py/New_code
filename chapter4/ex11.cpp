#include<iostream>
using namespace std;

int main()
{
        std::cout << "\033[33m[Coding] Write a program to check whether a given number is a multiple of both 3 and 5.\033[0m\n\n";

        int no;
        cin >> no;

        if (no % 3 == 0 && no % 5 == 0)
        {
            std::cout << "The given number is a multiple of both 3 and 5." << std::endl;
        }
        else
        {
            std::cout << "The given number is not a multiple of both 3 and 5." << std::endl;
        }
        
        

     
    return 0;
}