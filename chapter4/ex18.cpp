#include <iostream>
using namespace std;

int main()
{
    cout << "\033[33m[Coding] Write a program to determine the type of a triangle (equilateral, isosceles, scalene) from three sides.\033[0m\n";

    double sideA, sideB, sideC;

    cout << "Enter the length of side A: ";
    cin >> sideA;

    cout << "Enter the length of side B: ";
    cin >> sideB;

    cout << "Enter the length of side C: ";
    cin >> sideC;

    if (sideA == sideB && sideB == sideC)
    {
        cout << "This is an Equilateral triangle." << endl;
    }
    else if (sideA == sideB || sideB == sideC || sideA == sideC)
    {
        cout << "This is an Isosceles triangle." << endl;
    }
    else
    {
        cout << "This is a Scalene triangle." << endl;
    }

    return 0;
}