#include <iostream>

using namespace std;

int main() {
    int age;

   
    cout << "Enter your age: ";
    cin >> age;

   
    if (age < 0 || age > 120) {
        
        cerr << "[ERROR]: Invalid age entered! Age must be between 0 and 120." << endl;
    } else {
        
        cout << "Success! You are " << age << " years old." << endl;
    }

    return 0;
}