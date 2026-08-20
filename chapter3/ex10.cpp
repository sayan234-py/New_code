#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    string name;
    int roll_no;
    float marks;

    std::cout << "Enter the name: " ;
    getline(cin,name);//getline() takes as it is at once.
    std::cout << "Enter the roll number , and marks (using space): " << std::endl;
    cin>>roll_no>>marks;


    std::cout <<"        "<<setw(12) << "Marksheet of Student       " << std::endl;
    cout << left  << setw(10) << "ROLL NO" 
         << left  << setw(20) << "NAME" 
         << right << setw(10) << "MARKS" << endl;
    cout << string(40, '-') << endl; //it prints the 40 dotted line

    cout << left  << setw(10) << roll_no 
         << left  << setw(20) << name 
         << right << setw(10) << fixed << setprecision(2) << marks << endl;
    
    



    return 0;
}