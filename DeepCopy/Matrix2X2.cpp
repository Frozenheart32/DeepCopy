#include "Matrix2X2.h"

Matrix2X2& Matrix2X2::operator=(Matrix2X2& otherMatrix)
{
    printf("Operator = \n");
    if(otherMatrix.Matrix)
    {
        if(Matrix) delete[] Matrix;
        Matrix = new int*[2];
        for (int i = 0; i < 2; i++)
        {
            Matrix[i] = new int[2];
            for(int j = 0; j < 2; j++)
            {
                Matrix[i][j] = otherMatrix.Matrix[i][j]; 
            }
        }
    }

    if(otherMatrix.Info)
    {
        if(Info) delete Info;
        Info = new std::string(*otherMatrix.Info);
    }

    if(otherMatrix.Array)
    {
        if(Array) delete[] Array;
        auto size = sizeof(otherMatrix.Array) / sizeof(int);
        Array = new int[size];
        for (unsigned long long i = 0; i < size + 1; i++)
        {
            Array[i] = otherMatrix.Array[i];
        }
    }
    return (*this);
}
