#include <iostream>
using namespace std;

int main()
{
    cout << "\033[33m[Coding] Write a program to print a lightning star pattern using nested loops.\033[0m" << endl;

    int limit;
    cin >> limit;

  
    for (int i = 0; i < limit; i++)
    {
        for (int j = limit; j > 0; j--)
        {
            if (i >= j - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    
    for (int i = 0; i < limit - 1; i++)
    {
        for (int j = limit - 1; j > 0; j--)
        {
            if (i < j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}