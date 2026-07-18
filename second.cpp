#include<iostream>
using namespace std;
int main(){
    int original_no;
    int rev = 0;
    int rem = 0;

    cout << "Enter the original number= ";
    cin >> original_no;
    while(original_no > 0){
        rem = original_no%10;
        rev = (rev *10)+rem;
        original_no = original_no/10;

    }
    if (original_no == rev){
        cout << original_no << "is a Palindrome no.";
    }
    else{
        cout <<original_no<< "is not apalindrome no.";
    }
    return 0;
}