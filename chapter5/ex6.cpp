#include <iostream>
using namespace std;

int main()
{
    cout << "\033[33m[Coding] Write a program to print the following pattern using nested loops:\033[0m"<< endl;


// *
// **
// ***
// ****


    int limit;
    cout << "Enter the limit: ";
    cin >> limit;

    for (int i = 1; i <= limit; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << " * ";
        }
        std::cout << endl;
    }
    
    return 0;
}