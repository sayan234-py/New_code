#include<iostream>
using namespace std;
float readius;
int main()
{
        std::cout << "\033[31m[Coding] Write a program that takes the radius of a circle (hardcoded) and prints its area using 3.14159. \033[0m"<<std::endl;

        std::cout << "Enter the radius of a circle: ";
        cin >> readius;

        float area = 3.14159 * readius * readius;
        std::cout << "The area of the circle is: "<< area << std::endl;

    return 0;
}