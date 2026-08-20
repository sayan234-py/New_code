#include<iostream>
using namespace std;

int main()
{
    string s;
    //Using the getline insteed of taking the first character or word it take all the sentence at once
    getline(cin, s);  
    //It print what ever you have entered as input. Makinf the compleate sentense.
    cout << s;

    return 0;
}