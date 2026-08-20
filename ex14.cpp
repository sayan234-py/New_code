#include <iostream>
using namespace std;

int main()
{
    std::cout << "\033[33m [Coding] If cost price and selling price of an item is input through the keyboard, write a program to determine whether the seller has made profit or incurred loss or no profit no loss. Also determine how much profit he made or loss he incurred.\033[0m" << std::endl;

    int cp; 
    std::cout << "Enter the cost price: ";
    cin >> cp;

    int sp; 
    std::cout << "Enter the sell price: ";
    cin >> sp;

    
    if (sp > cp)
    {
        std::cout << "The seller made a profit of: "<< " ₹ " << sp-cp  << std::endl;
    }
    else if (sp<cp)
    {
        std::cout << "The seller had in a loss of: "  << " ₹ " << sp-cp << std::endl;
    }
    else if (sp == cp)
    {
        std::cout << "The seller hasn't make any profit or loss  " << std::endl;
    }
    else
    {
        std::cout << "wrong entry" << std::endl;
    }
    
    
    

    return 0;
}
