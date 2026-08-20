#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding] Write a program to make visible the typecasting. \033[0m" << std::endl <<std::endl;

    int x;
    std::cout << "Enter the value of 'X': ";
    cin >> x;
    float b = (float) x; //Typecasting

    std::cout <<"The result after typecasting: " << b/2 <<" is in float." << std::endl;

    float co = 45*3-6/23;
    std::cout << "result: " <<co << std::endl;
    return 0;
}