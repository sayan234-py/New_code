#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
   double pi = 3.14191487778;

   std::cout << "The original no is: "<<pi <<std::endl << std::endl;

   std::cout << " up to one decimal point:" << std::endl;
   std::cout << setprecision(2) << pi << std::endl;

   std::cout << " up to two decimal point:" << std::endl;
   std::cout << setprecision(3) << pi << std::endl;

   std::cout << " up to three decimal point:" << std::endl;
   std::cout << setprecision(4) << pi << std::endl;


    
    return 0;
}