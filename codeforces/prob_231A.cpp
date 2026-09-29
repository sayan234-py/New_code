#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int countf = 0;
    int que;
    std::cout << "Enter the size for rows and columns: ";
    std::cin >> que;

    std::vector<std::vector<int>> matrix(que, std::vector<int>(que, 0));

    std::cout << "Enter " << que * que << " elements:\n";
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int rowsum = 0;
        for (int j = 0; j < 3; j++)
        {
            rowsum += matrix[i][j];
            if (rowsum >= 2)
            {
                countf++;
            }
        }
        
    }
    std::cout << "\n"
                  << countf << std::endl;

    return 0;
}