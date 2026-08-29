#include <iostream>
using namespace std;

int main()
{
    cout << "\033[33mThis program demonstrates the palindrome number concept.\033[0m\n";
    int no;
    int rem;
    int res = 0;
    int orinm;
    std::cout << "enter a three digit no: " << std::endl;
    if (!(cin >> no) || no < 100 || no > 999)
    {
        std::cout << "please enter a valid 3 digit no!!" << std::endl;
        return 1;
    }
    orinm = no;

    while (no > 0)
    {
        rem = no % 10;
        res += rem * rem * rem;
        no /= 10;
    }
    if (res == orinm)
    {
        std::cout << "Its a valid amstrong no. " << std::endl;
    }
    else
    {
        std::cout << "Its not a valid amstrong no." << std::endl;
    }
    return 0;
}