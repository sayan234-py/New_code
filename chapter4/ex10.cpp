#include <iostream>

int main() {
    double x, y;

    std::cout << "\033[33m [Coding] Write a program to determine the quadrant of a point (x, y) on a Cartesian plane\033[0m\n\n";

    std::cout << "Enter the x-coordinate: ";
    std::cin >> x;
    std::cout << "Enter the y-coordinate: ";
    std::cin >> y;

    
    if (x > 0 && y > 0) {
        std::cout << "The point (" << x << ", " << y << ") is in the First Quadrant.\n";
    } 
    else if (x < 0 && y > 0) {
        std::cout << "The point (" << x << ", " << y << ") is in the Second Quadrant.\n";
    } 
    else if (x < 0 && y < 0) {
        std::cout << "The point (" << x << ", " << y << ") is in the Third Quadrant.\n";
    } 
    else if (x > 0 && y < 0) {
        std::cout << "The point (" << x << ", " << y << ") is in the Fourth Quadrant.\n";
    } 
    else if (x == 0 && y == 0) {
        std::cout << "The point is at the Origin.\n";
    } 
    else if (x == 0) {
        std::cout << "The point is on the Y-axis.\n";
    } 
    else {
        std::cout << "The point is on the X-axis.\n";
    }

    return 0;
}
