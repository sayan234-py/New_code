#include <iostream>
using namespace std;

enum class calc {
    plus = 1,
    minus,
    into,
    div
};

int main()
{
    int chos;
    int a;
    int b;

    cout << "Enter the first no: ";
    if (!(cin >> a)) {
        cout << "Please enter a valid integer." << endl;
        return 1;
    }

    cout << "Enter the second no: ";
    if (!(cin >> b)) {
        cout << "Please enter a valid integer." << endl;
        return 1;
    }

    do
    {
        cout << "Enter your choice of operand: ";
        if (!(cin >> chos)) {
            cout << "Please enter a number between 1 and 4." << endl;
            return 1;
        }

        if (chos < 1 || chos > 4) {
            cout << "Wrong entry. Please choose between 1 to 4."
                 << endl;
        }

    } while (chos < 1 || chos > 4);

    calc mychos = static_cast<calc>(chos);

    switch (mychos)
    {
        case calc::plus:
    cout << "The result is: " << a + b << endl;     
            break;

        case calc::minus:
            cout << "The result is: " << a - b << endl;
            break;

        case calc::into:
            cout << "The result is: " << a * b << endl;
            break;

        case calc::div:
            if (b == 0) {
                cout << "Cannot divide by zero." << endl;
                return 1;
            }
            cout << "The result is: " << a / b << endl;
            break;
    }

    return 0;
}
