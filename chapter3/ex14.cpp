#include<iostream>
using namespace std;

enum class day { 
    sunday = 1,
    monday,
    tuesday,
    wednesday,
    thursday,
    friday,
    saturday
};
int main()

{
    int inptnmbr;
    std::cout << "Enter the number of the day you want to choose(eg. 1 for monday, 7 for saturday): ";
    cin >> inptnmbr;

    day choosenday = static_cast<day>(inptnmbr);

    switch (choosenday)
    {
    case day::sunday:
        std::cout << "It's sunday";
        break;

    case day::monday:
        std::cout << "It's monday";
        break;
    case day::tuesday:
        std::cout << "It's tuesday";
        break;
    case day::wednesday:
        std::cout << "It's wednesday";
        break;
    case day::thursday:
        std::cout << "It's thursday";
        break;
    case day::friday:
        std::cout << "It's friday";
        break;
    case day::saturday:
        std::cout << "It's saturday";
        break;
    default:
        std::cout << "Invalid day, please enter a number between 1 and 7.";
        break;
    }
    
    return 0;
}