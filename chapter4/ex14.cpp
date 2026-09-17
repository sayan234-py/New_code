#include <iostream>
#include <cmath> 

int main() {
    double weight;
    
    std::cout << "Enter the package weight in grams: ";
    std::cin >> weight;

    
    if (weight <= 0) {
        std::cout << "Weight must be greater than 0!" << std::endl;
        return 0;
    }

    int cost = 5; 

    if (weight > 50) {
        double extra_weight = weight - 50;
        
        
        int extra_blocks = std::ceil(extra_weight / 50.0); 
        
        cost += extra_blocks * 5;
    }

    std::cout << "Total Cost: " << cost << " rupees" << std::endl;

    return 0;
}
