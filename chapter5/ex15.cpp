#include <iostream>
using namespace std;

int main()
{
    cout << "\033[33m[Coding] Write a program to print a diamond star pattern using nested loops.\033[0m" << endl;
    int limit;
    cin >> limit;

    // Upper half
    for (int i = 1; i <= limit; i++)
    {
        
        for (int j = 1; j <= limit - i; j++)
        {
            cout << " ";
        }

        
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    // Lower half
    for (int i = limit - 1; i >= 1; i--)
    {
        
        for (int j = 1; j <= limit - i; j++)
        {
            cout << " ";
        }

        
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
    return 0;
}