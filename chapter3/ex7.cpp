#include<iostream>
#include<iomanip>
using namespace std;

int main()



{
    int apple = 10;
    int banana = 13;
    int mach = 250;

    std::cout << "Normal placing the values." << std::endl;
    std::cout << "Apple: "<< apple<< std::endl;
    std::cout << "Banana: "<<banana << std::endl;
    std::cout << "Mach: " << mach<< std::endl<< std::endl;

    //SETW formats the data by adding a little space at the left.

    std::cout << "Using 'SETWW' ." << std::endl;
    std::cout <<setw(12)<<"Apple" <<setw(6) << apple << std::endl;
    std::cout <<setw(12)<<"Banana" <<setw(6) << banana <<setw(6)<< std::endl;
    std::cout <<setw(12)<<"Mach" <<setw(6)<< mach<< std::endl;
   


    
    return 0;
}