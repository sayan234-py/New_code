#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Coding]  Declare variables of type int, float, char, and bool, initialize them, and print all four.\033[0m" << std::endl <<std::endl;

    int age = 21;
    float gpa = 8.7;
    char grade = 'A';
    bool passed = true;
    cout << age << std::endl << " " << gpa << std::endl << " " << grade << std::endl << " " << passed;
    
    return 0;
}