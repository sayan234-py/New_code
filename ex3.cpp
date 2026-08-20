#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m[Predict Output] What is the output? bool flag = 10;cout << flag;\033[0m" << std::endl <<std::endl;

    bool flag = 10;
    cout << flag;
    std::cout << "\033[32m In C++, a bool variable can only hold the values true or false. When you assign an integer to a bool, any non-zero value implicitly converts to true (which is represented internally as 1).\033[0m" << std::endl;
    return 0;
}