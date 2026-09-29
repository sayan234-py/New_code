#include <iostream>
using namespace std;

int main()
{
int n;
std::cout << "Enter the limit: ";
cin >> n;

int countf = 0;
std::cout << "Enter the array "<< n*n <<" elements: ";
for (int i = 0; i < n; i++)
{
int rowsum = 0;

for (int j = 0; j < 3; j++)
{
int value;
cin >> value;

rowsum += value;
}

if (rowsum >= 2)
{
countf++;
}
}

cout <<" correct answers are: "<< countf << endl;

return 0;
}