#include <iostream>
using namespace std;

int main() {
    char ch1, ch2;

    cout << "--- Example 1: Using cin >> ---\n";
    cout << "Type a letter and press space and another letter (e.g., 'A B'): ";
    
    cin >> ch1; // Reads 'A', but completely skips the space
    cin >> ch2; // Reads 'B' (skipping the space automatically)

    cout << "ch1 = " << ch1 << endl;
    cout << "ch2 = " << ch2 << endl;


    // Clear the input buffer before the next example
    cin.ignore(1000, '\n');

    cout << "\n--- Example 2: Using cin.get() ---\n";
    cout << "Type a letter and press space and another letter (e.g., 'A B'): ";

    ch1 = cin.get(); // Reads 'A'
    ch2 = cin.get(); // Reads the SPACE character! It does not skip it.

    cout << "ch1 = '" << ch1 << "'" << endl;
    cout << "ch2 = '" << ch2 << "' (this is a hidden space)" << endl;

    return 0;
}