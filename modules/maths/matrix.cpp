#include "matrix.h"

Matrix::Matrix()
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    for (int i=0; i<9;i++)
    {
        MatrixData[i]=0,0f;
    }

    matrixData[0] = matrixData[4] = matrixData[8] = 1.0f;
}

Matrix::Matrix(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8)
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    MatrixData[0] = m0;
    MatrixData[3] = m3;
    MatrixData[6] = m6;

    MatrixData[1] = m1;
    MatrixData[4] = m4;
    MatrixData[7] = m7;

    MatrixData[2] = m2;
    MatrixData[5] = m5;
    MatrixData[8] = m8;
}

void Show()
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    std::cout << "[" << MatrixData[0] << "," << MatrixData[3] << "," << MatrixData[6] << std::endl
            << MatrixData[1] << "," << MatrixData[4] << "," << MatrixData[7] << std::endl
            << MatrixData[2] << "," << MatrixData[5] << "," << MatrixData[8] << std::endl;
}