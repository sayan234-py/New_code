#include<iostream>
using namespace std;

int main()
{
    int temp;
    char unit;

    std::cout << "\033[33m  [Coding] Write a program using the if and else if function to calculate the temperature conversion by letting know the user choise . \033[0m" << std::endl <<std::endl;


    std::cout << "Enter the temperature: ";
    cin>> temp;
    std::cout << "'F' or 'f' for farenheit.";
    std::cout << "'C' or 'c' for celcius.";
    std::cout << "Enter the unit you want to convert it to:  ";
    cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        float farn = (1.8 * temp)+32.0;
        std::cout << "The tempetature in Farenheit is: " << farn << " F"<< std::endl;
    }
    else if (unit == 'C' || 'c')
    {
        float ccel = (temp-32)/1.8;
        std::cout << "The tempetature in celcius is: " << ccel<< " C" << std::endl;
    }
    
    
    return 0;
}