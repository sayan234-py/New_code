#include<iostream>
using namespace std;
enum class operand {
    plus = 1,
    minus,
    into,
    div
 };
int main()
{
    double num1;
    double num2;

    int operandc;
    std::cout << "Enter the numbers by adding space: ";
    cin >>num1 >> num2;

    
    do
    {
        std::cout << "Enter the operand you want to perform (eg. 1 for plus, 4 for div: )" ;
        cin >> operandc;
        if (operandc <= 0 || operandc >4)
        {
            std::cout << "Wrong entry please enter between 1 to 4" << std::endl;
        }
        
    } while (operandc <= 0 || operandc >4);
    
    operand myoperandc = static_cast<operand>(operandc);

    switch (myoperandc)
    {
    case operand::plus:
        std::cout << "The result is: "<< num1 + num2 << std::endl;
        break;
    
    case operand::minus:
        std::cout << "The result is: "<< num1 - num2 << std::endl;
        break;
    
    case operand::into:
        std::cout << "The result is: "<< num1 * num2 << std::endl;
        break;
    
    case operand::div:
        std::cout << "The result is: "<< num1 / num2 << std::endl;
        break;
    
    default:
        std::cout << "WRONG ENTRY PLEASE ENTER BETWEEN 1 TO 4, THANK YOU. " << std::endl;
        break;
    }


    
    return 0;
}