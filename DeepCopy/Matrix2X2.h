#pragma once
#include <string>

class Matrix2X2
{

public:

    Matrix2X2()
    {
        printf("Constructor #1\n");
        Matrix = new int*[2];
        for (int i = 0; i < 2; i++)
        {
            Matrix[i] = new int[2];
            for(int j = 0; j < 2; j++)
            {
                Matrix[i][j] = 0;
            }
        }
        
        Info = new std::string();
        
        Array = new int[2];
        for (int i = 0; i < 2; i++)
        {
            Array[i] = 0;
        }
    }

    Matrix2X2(int** matrix, std::string* info, int* array)
    {
        printf("Constructor #2\n");
        Matrix = new int*[2];
        for (int i = 0; i < 2; i++)
        {
            Matrix[i] = new int[2];
            for(int j = 0; j < 2; j++)
            {
                Matrix[i][j] = matrix[i][j]; 
            }
        }
        Info = new std::string(*info);
        Array = new int(*array);
    }

    Matrix2X2(Matrix2X2& otherMatrix)
    {
        printf("Constructor #3\n");
        Matrix = new int*[2];
        for (int i = 0; i < 2; i++)
        {
            Matrix[i] = new int[2];
            for(int j = 0; j < 2; j++)
            {
                Matrix[i][j] = otherMatrix.Matrix[i][j]; 
            }
        }
        Info = new std::string(*otherMatrix.Info);
        Array = new int(*otherMatrix.Array);
    }

    ~Matrix2X2()
    {
        printf("Destructor\n");
        delete[] Matrix;
        delete Info;
        delete[] Array;
    }

    Matrix2X2& operator=(Matrix2X2& otherMatrix);
    
private:

    int** Matrix = nullptr;
    std::string* Info = nullptr;
    int* Array = nullptr;
    
public:
    
};
