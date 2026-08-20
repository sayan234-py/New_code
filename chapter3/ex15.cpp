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
    int opernd;

    double num1;
    double num2;
    // double result;

    std::cout << "Enter the number first number: ";
    cin >> num1;

    std::cout << "Enter the number second number: ";
    cin >> num2;
 
    do {
        std::cout << "Enter the operand you want to perform (1 for plus through 4 for division): ";
        cin >> opernd;

        if (opernd < 1 || opernd > 4) {
            std::cout << "Wrong entry! Please choose between 1 and 4.\n";
        }
    } while (opernd < 1 || opernd > 4);

    operand youroperandc = static_cast<operand>(opernd);

    switch (youroperandc)
    {
    case operand::plus:
        std::cout << "the result is: " << num1+num2 << std::endl;
        break;
    
    case operand::minus:
        std::cout << "the result is: " << num1-num2 << std::endl;
        break;
    
    case operand::into:
        std::cout << "the result is: " << num1*num2 << std::endl;
        break;
    
    case operand::div:
        std::cout << "the result is: " << num1/num2 << std::endl;
        break;
    
    default:
        break;
    }
    return 0;
}
