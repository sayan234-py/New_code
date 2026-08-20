#include<iostream>
using namespace std;

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverses the logical state of its operand

        std::cout << "\033[33m  [Coding] Write a program using the logical operators to display the use of it. \033[0m" << std::endl <<std::endl;


    bool  munny = true;
    int number;
    std::cout << "Enter the number: ";
    cin >>number;

    //use of && (LOGICAL AND) operator
    if (number>0 && number % 2 !=0)
    {
        std::cout << "The number is an odd no. " << std::endl;
    }
    else
    {
        std::cout << "The number is not an odd no. " << std::endl;
    }
    //use of || (LOGICAL OR) operator
    if (number <!0 || number <30)
    {
        std::cout << "The number is between 1 to 30 " << std::endl;
    }
    else{
        std::cout << "The number is not between 1 to 30" << std::endl;
    }
    //use of ! (LOGICAL NOT) operator
    if (true)
    {
        std::cout << "The girl is munni. " << std::endl;
    }
    else
    {
        std::cout << "No, The girl is not." << std::endl;
    }
    
    
    
    
    return 0;
}