#include<iostream>
using namespace std;

int main()
{
    std::cout << "\033[31m  [Coding] Write a program to take a user's name and age as input and print a greeting using both.\033[0m" << std::endl <<std::endl;
    std::cout << "\033[33m  [Coding] Write a program using `getline()` to read a full sentence from the user and print it back.\033[0m" << std::endl <<std::endl;

    string name;
    string words;
    std::cout << "Enter your name: " ;
    getline(cin, name);
    std::cout << "Enter some words about you: " ;
    getline(cin, words);


    int age;
    std::cout << "Enter your age: " ;
    cin >>age;

    std::cout << "Hello " << name << " welcome ,"<<"your age is "<<age<<" some thing abot yoy is, "<<words << std::endl;
    

    return 0;
}