#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char input;

    cout << "Enter the character: ";
    cin >> input;

    if (tolower(input) == 'a' || tolower(input) == 'e' ||
        tolower(input) == 'i' || tolower(input) == 'o' ||
        tolower(input) == 'u')
    {
        cout << "It's a vowel!!";
    }
    else if (isalpha(input))
    {
        cout << "It's a consonant!!";
    }
    else if (isdigit(input))
    {
        cout << "It's a digit!!";
    }
    else
    {
        cout << "It's a special character!!";
    }

    return 0;
}