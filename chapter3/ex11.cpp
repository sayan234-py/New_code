#include<iostream>
using namespace std;

int main()
{
    //implisit and explisit type conversion
    int correct = 30;
    int questions = 40;
    std::cout << "Percentage is in total: "<<correct/(double)questions*100<< " %" << std::endl;
    int x = (char)'d';
    cout << x<<endl;
    cout << (char)56;
    return 0;
}