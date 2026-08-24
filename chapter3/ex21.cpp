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
    int inpt;

    do
    {
        
        std::cout << "Enter the day number( eg. 1 for sunday , 7 for saturday): ";
        cin >> inpt;
        if (inpt < 1 || inpt > 7)
        {
            std::cout << "Worng entry please choose between 1 and 7 " << std::endl;
        }
        

        
    } while (inpt < 1 || inpt > 7);

    day choosenday = static_cast<day>(inpt);
    
    switch (choosenday)
    {
    case day::sunday:
        std::cout << "The day is sunday" << std::endl;
        break;

    case day::monday:
        std::cout << "The day is monday" << std::endl;
        break;

    case day::tuesday:
        std::cout << "The day is tuesday" << std::endl;
        break;

    case day::wednesday:
        std::cout << "The day is wednesday" << std::endl;
        break;

    case day::thursday:
        std::cout << "The day is thursday" << std::endl;
        break;

    case day::friday:
        std::cout << "The day is friday" << std::endl;
        break;

    case day::saturday:
        std::cout << "The day is saturday" << std::endl;
        break;

    default:
        std::cout << "wrong entry !!";
        break;
    }
    
    return 0;
}