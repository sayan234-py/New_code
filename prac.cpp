#include<iostream>
using namespace std;

int main() {

    int a = 56;
    int b = 45;

    int sum = a+b;
    int sub = a-b;
    int div = a/b;
    int prod = a*b;
    float avg = (a+b)/2;
    for(int i=1; i<a; i++){
        cout<<"The numbers are = "<<i*a<<endl;
    }

    cout <<"Hello world, My name is Sayan nandi "<<endl;
    cout <<"The sum of the following two numbers is = "<<sum<<endl;
    cout <<"The substraction of the following two numbers is = "<<sub<<endl;
    cout <<"The division of the following two numbers is = "<<div<<endl;
    cout <<"The product of the following two numbers is = "<<prod<<endl;
    cout <<"The average of the following two numbers is = "<<avg<<endl;
    return 0;
}