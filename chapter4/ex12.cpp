#include <iostream>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    std::cout << "\033[33m[Coding] Write a program that simulates a simple traffic light: given a color string, print the action (Stop/Go/Wait).\033[0m\n\n";

    string colour;
    cin >> colour;
    transform(colour.begin(), colour.end(), colour.begin(),
              [](unsigned char character) { return tolower(character); });

    if (colour == "red")
    {
        std::cout << "Its the red light , You need to stop" << std::endl;
    }
    else if (colour == "yellow")
    {
        std::cout << "Its the yellow , You need to go slow" << std::endl;
    }
    else if (colour == "green")
    {
        std::cout << "Its the green , You need to go." << std::endl;
    }
    else
    {
        std::cout << "Wrong choice. Choose between 'red', 'yellow', and 'green'." << std::endl;
    }

    return 0;
}
