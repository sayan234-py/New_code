#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;


int main()
{
    std::cout << "\033[33m  [Coding] Write a program using 'cmath' funcations to calculate the third side of the triangle.\033[0m" << std::endl <<std::endl;

    double a;
    double b;
    double c;

    std::cout << "Ente the value od A: ";
    cin >> a;
    
    std::cout << "Ente the value od B: ";
    cin >> b;

    // a = pow(a,2);
    // b = pow(b,2);

    c = sqrt(pow(a,2)+pow(b,2));

    std::cout << "The value of Third side of triangle is: " <<setprecision(3) << c;
    


    
    
    return 0;
}