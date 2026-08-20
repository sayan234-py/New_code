#include<iostream>

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
    std::cout << "\033[31m[Coding] Write a program using an enum for days of the week and print the namecorresponding to a given number.\033[0m"<<std::endl;

    int inputnumber;
    std::cout << "\033[33m Enter a day number(eg. 1 for sunday, 7for saturday): \033[0m";
    std::cin >> inputnumber;
    
    day chosenDay = static_cast<day>(inputnumber);

    switch (chosenDay)
    {
    case day::sunday:
        std::cout << "It's Sunday—rest deeply, recharge your spirit, and prepare to shine in the week ahead!" << std::endl;
        break;
    
    case day :: monday:
        std::cout << "It's Monday—a fresh week is yours to shape. Begin with courage and purpose!" << std::endl;
        break;
    
    case day :: tuesday:
        std::cout << "It's Tuesday—every focused step moves you closer to the goals you believe in!" << std::endl;
        break;
    
    case day :: wednesday:
        std::cout << "It's Wednesday—you are halfway there. Keep going; your dedication is building something great!" << std::endl;
        break;
    
    case day :: thursday:
        std::cout << "It's Thursday—hold on to your momentum. The effort you give today will reward you tomorrow!" << std::endl;
        break;
    
    case day :: friday:
        std::cout << "It's Friday—finish with pride, celebrate your progress, and step into the weekend with joy!" << std::endl;
        break;
    
    case day :: saturday:
        std::cout << "It's Saturday—embrace your well-earned rest and make time for the things that inspire you!" << std::endl;
        break;
    
    default:
        std::cout << "Every new attempt is a chance to learn—please enter a number from 1 to 7." << std::endl;
        break;
    }
        
    return 0;
}
