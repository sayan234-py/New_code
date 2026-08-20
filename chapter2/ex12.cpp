#include <iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m [Coding] Write a program to convert Celsius to Fahrenheit using the formula F = C*9/5 + 32.\033[0m" << std::endl;

    float celsius; 
    std::cout << "Enter the temperature in celsius: ";
    cin >> celsius;

    
    float fahrenheit = (celsius * 9.0f / 5.0f) + 32.0f;

    std::cout << celsius << " celsius temperature = " << fahrenheit << " fahrenheit" << std::endl;

    return 0;
}
