
#include <string>

#include "Matrix2X2.h"

void FillMatrix2X2(int** matrix)
{
    for (int i = 0; i < 2; i++)
    {
        matrix[i] = new int[2];
        for (int j = 0; j < 2; j++)
        {
            matrix[i][j] = i + j;
        }
    }
}

void FillArray(int* array, int length)
{
    for (int i = 0; i < length; i++)
    {
        array[i] = i;
    }
}

int main(int argc, char* argv[])
{
    int** PrimaryMatrix = new int*[2];
    FillMatrix2X2(PrimaryMatrix);
    
    int* PrimaryArray = new int[2];
    FillArray(PrimaryArray, 2);

    std::string* PrimaryInfo = new std::string("My info");

    Matrix2X2 Matrix2X2_1{};
    Matrix2X2 Matrix2X2_2{PrimaryMatrix, PrimaryInfo, PrimaryArray};
    auto Matrix3 = Matrix2X2_2;
    
    Matrix3 = Matrix2X2_1;

    delete[] PrimaryMatrix;
    delete[] PrimaryArray;
    delete PrimaryInfo;
    return 0;
}


