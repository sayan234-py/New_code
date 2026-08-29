#include <iostream>
using namespace std;

int main()
{
    
    cout << "\033[32mThis program demonstrates the palindrome number concept.\033[0m\n";

    int no;
    int rev = 0;
    int rem;
    int original;
    std::cout << "Enter the two digit number: ";
    if (!(cin >> no) || no < 10 || no > 99) {
        cout << "Please enter a valid two-digit number." << endl;
        return 1;
    }

    original = no;
    while (no != 0)
    {
        rem = no % 10;
        rev = (rev * 10) + rem;
        no /= 10;
    }

    if (rev == original)
    {
        cout << "This is a valid palindrome number." << endl;
    }
    else{
        cout << "This is not a valid palindrome number." << endl;
    }
    
    
    

    return 0;
}
