#include <iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] [Coding] Write a program to print a right-angled triangle pattern of numbers\033[0m" << std::endl;

        // 1
        // 12
        // 123
        // 1234

        int no;
        cin >> no;

        for (int i = 1; i <= no; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                std::cout << j <<" ";
            }
            std::cout  << std::endl;
        }
        

        return 0;
}