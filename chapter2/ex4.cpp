#include<iostream>
using namespace std;

float length;
float breadh;
int main()
{
     std::cout << "\033[31m[Coding] Write a program to calculate the area of a rectangle given length and width as variables.\033[0m" << std::endl <<std::endl;

     std::cout << "Enter the length: " << std::endl;
     cin >> length;
     std::cout << "Enter the breadth: " << std::endl;
     cin >> breadh;

     float area = (length * breadh);
     float peremeter = 2*(length+breadh);

     std::cout << "The area of the rectangle is: " <<area  << std::endl <<"The peremeter of the rectangle is: " << peremeter << std::endl;

     
    return 0;
}