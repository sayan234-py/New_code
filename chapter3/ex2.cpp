#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<long long>> Matrix;

Matrix multiply(Matrix A ,Matrix B){
    Matrix C{{0,0}, {0,0}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                C[i][j]= C[i][j]+(A[i][k] * B[k][j]);
            }
            
        }
        
    }
    

    return C;
}

int main()
{
   Matrix MatrixA{{1,2}, {3,4}};
   Matrix MatrixB{{5,6}, {7,8}};
   Matrix result = multiply(MatrixA,MatrixB);

   std::cout << "Result Matrix C:" << std::endl;
   for (int i = 0; i < 2; i++)
   {
       for (int j = 0; j < 2; j++)
       {
           std::cout << result[i][j] << " ";
       }
       std::cout << std::endl;
    
   }

    return 0;
}
