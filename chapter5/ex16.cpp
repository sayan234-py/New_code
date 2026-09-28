#include <iostream>
using namespace std;

int main()
{
    cout << "\033[33m[Coding] Write a program to count how many digits are in a given integer using a loop.\033[0m" << endl;

    int input;
    int count = 0;
    cin >> input;

    while (input != 0)
    {
        input /= 10;
        count++;
    }

    std::cout << "number of digits are: " << count << std::endl;
    return 0;
}