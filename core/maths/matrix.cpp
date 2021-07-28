#include "matrix.h"


#pragma mark-constructors
Matrix3::Matrix3()
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    for (int i=0; i<9;i++)
    {
        MatrixData[i]=0.0f;
    }

    MatrixData[0] = MatrixData[4] = MatrixData[8] = 1.0f;
}

Matrix3::Matrix3(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8)
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


#pragma mark-destructors
Matrix3::~Matrix3(){}


#pragma mark-copy constructors
Matrix3 &Matrix3::operator=(const Matrix3 &value)
{
    for (int i = 0; i < 9; i++)
    {
        MatrixData[i] = value.MatrixData[i];
    }

    return *this;
}


#pragma mark-debug
void Matrix3::Show()
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    std::cout << "[" << MatrixData[0] << "," << MatrixData[3] << "," << MatrixData[6] << std::endl
                << MatrixData[1] << "," << MatrixData[4] << "," << MatrixData[7] << std::endl
                << MatrixData[2] << "," << MatrixData[5] << "," << MatrixData[8] << "]" << std::endl;
}


#pragma mark-matrix addition
Matrix3 Matrix3::operator+(const Matrix3 &m)
{
    Matrix3 n;

    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    n.MatrixData[0] = MatrixData[0] + m.MatrixData[0];
    n.MatrixData[3] = MatrixData[3] + m.MatrixData[3];
    n.MatrixData[6] = MatrixData[6] + m.MatrixData[6];

    n.MatrixData[1] = MatrixData[1] + m.MatrixData[1];
    n.MatrixData[4] = MatrixData[4] + m.MatrixData[4];
    n.MatrixData[7] = MatrixData[7] + m.MatrixData[7];

    n.MatrixData[2] = MatrixData[2] + m.MatrixData[2];
    n.MatrixData[5] = MatrixData[5] + m.MatrixData[5];
    n.MatrixData[8] = MatrixData[8] + m.MatrixData[8];

    return n;
}

void Matrix3::operator+=(const Matrix3 &m)
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    MatrixData[0] += m.MatrixData[0];
    MatrixData[3] += m.MatrixData[3];
    MatrixData[6] += m.MatrixData[6];

    MatrixData[1] += m.MatrixData[1];
    MatrixData[4] += m.MatrixData[4];
    MatrixData[7] += m.MatrixData[7];

    MatrixData[2] += m.MatrixData[2];
    MatrixData[5] += m.MatrixData[5];
    MatrixData[8] += m.MatrixData[8];
}


#pragma mark-matrix subtraction
Matrix3 Matrix3::operator-(const Matrix3 &m)
{
    Matrix3 n;

    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    n.MatrixData[0] = MatrixData[0] - m.MatrixData[0];
    n.MatrixData[3] = MatrixData[3] - m.MatrixData[3];
    n.MatrixData[6] = MatrixData[6] - m.MatrixData[6];

    n.MatrixData[1] = MatrixData[1] - m.MatrixData[1];
    n.MatrixData[4] = MatrixData[4] - m.MatrixData[4];
    n.MatrixData[7] = MatrixData[7] - m.MatrixData[7];

    n.MatrixData[2] = MatrixData[2] - m.MatrixData[2];
    n.MatrixData[5] = MatrixData[5] - m.MatrixData[5];
    n.MatrixData[8] = MatrixData[8] - m.MatrixData[8];

    return n;
}

void Matrix3::operator-=(const Matrix3 &m)
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    MatrixData[0] -= m.MatrixData[0];
    MatrixData[3] -= m.MatrixData[3];
    MatrixData[6] -= m.MatrixData[6];

    MatrixData[1] -= m.MatrixData[1];
    MatrixData[4] -= m.MatrixData[4];
    MatrixData[7] -= m.MatrixData[7];

    MatrixData[2] -= m.MatrixData[2];
    MatrixData[5] -= m.MatrixData[5];
    MatrixData[8] -= m.MatrixData[8];
}

#pragma mark-matrix multiplication scalar
Matrix3 Matrix3::operator*(const float s)
{
    Matrix3 n;

    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    n.MatrixData[0] = MatrixData[0] * s;
    n.MatrixData[3] = MatrixData[3] * s;
    n.MatrixData[6] = MatrixData[6] * s;

    n.MatrixData[1] = MatrixData[1] * s;
    n.MatrixData[4] = MatrixData[4] * s;
    n.MatrixData[7] = MatrixData[7] * s;

    n.MatrixData[2] = MatrixData[2] * s;
    n.MatrixData[5] = MatrixData[5] * s;
    n.MatrixData[8] = MatrixData[8] * s;

    return n;
}

void Matrix3::operator*=(const float s)
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    MatrixData[3] *= s;
    MatrixData[0] *= s;
    MatrixData[6] *= s;

    MatrixData[1] *= s;
    MatrixData[4] *= s;
    MatrixData[7] *= s;

    MatrixData[2] *= s;
    MatrixData[5] *= s;
    MatrixData[8] *= s;
}

#pragma mark-matrix division scalar
Matrix3 Matrix3::operator/(const float s)
{
    Matrix3 n;

    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    n.MatrixData[0] = MatrixData[0] / s;
    n.MatrixData[3] = MatrixData[3] / s;
    n.MatrixData[6] = MatrixData[6] / s;

    n.MatrixData[1] = MatrixData[1] / s;
    n.MatrixData[4] = MatrixData[4] / s;
    n.MatrixData[7] = MatrixData[7] / s;

    n.MatrixData[2] = MatrixData[2] / s;
    n.MatrixData[5] = MatrixData[5] / s;
    n.MatrixData[8] = MatrixData[8] / s;

    return n;
}

void Matrix3::operator/=(const float s)
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    MatrixData[0] /= s;
    MatrixData[3] /= s;
    MatrixData[6] /= s;

    MatrixData[1] /= s;
    MatrixData[4] /= s;
    MatrixData[7] /= s;

    MatrixData[2] /= s;
    MatrixData[5] /= s;
    MatrixData[8] /= s;
}


#pragma mark-vector transfomation
Vector3 Matrix3::operator*(const Vector3 &v)
    const
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    return Vector3(MatrixData[0] * v.x + MatrixData[3] * v.y + MatrixData[6] * v.z,
                   MatrixData[1] * v.x + MatrixData[4] * v.y + MatrixData[7] * v.z,
                   MatrixData[2] * v.x + MatrixData[5] * v.y + MatrixData[8] * v.z);
}

Vector3 Matrix3::TransformVectorByMatrix(const Vector3 &v)
    const
{
    return (*this) * v;
}


#pragma mark-matrix multiplication
Matrix3 Matrix3::operator*(const Matrix3 &m)
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    return Matrix3(MatrixData[0] * m.MatrixData[0] + MatrixData[3] * m.MatrixData[1] + MatrixData[6] * m.MatrixData[2],
                   MatrixData[0] * m.MatrixData[3] + MatrixData[3] * m.MatrixData[4] + MatrixData[6] * m.MatrixData[5],
                   MatrixData[0] * m.MatrixData[6] + MatrixData[3] * m.MatrixData[7] + MatrixData[6] * m.MatrixData[8],

                   MatrixData[1] * m.MatrixData[0] + MatrixData[4] * m.MatrixData[1] + MatrixData[7] * m.MatrixData[2],
                   MatrixData[1] * m.MatrixData[3] + MatrixData[4] * m.MatrixData[4] + MatrixData[7] * m.MatrixData[5],
                   MatrixData[1] * m.MatrixData[6] + MatrixData[4] * m.MatrixData[7] + MatrixData[7] * m.MatrixData[8],

                   MatrixData[2] * m.MatrixData[0] + MatrixData[5] * m.MatrixData[1] + MatrixData[8] * m.MatrixData[2],
                   MatrixData[2] * m.MatrixData[3] + MatrixData[5] * m.MatrixData[4] + MatrixData[8] * m.MatrixData[5],
                   MatrixData[2] * m.MatrixData[6] + MatrixData[5] * m.MatrixData[7] + MatrixData[8] * m.MatrixData[8]);
}

void Matrix3::operator*=(const Matrix3 &m)
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    float t1;
    float t2;
    float t3;

    t1 = MatrixData[0] * m.MatrixData[0] + MatrixData[3] * m.MatrixData[1] + MatrixData[6] * m.MatrixData[2];
    t2 = MatrixData[0] * m.MatrixData[3] + MatrixData[3] * m.MatrixData[4] + MatrixData[6] * m.MatrixData[5];
    t3 = MatrixData[0] * m.MatrixData[6] + MatrixData[3] * m.MatrixData[7] + MatrixData[6] * m.MatrixData[8];

    MatrixData[0] = t1;
    MatrixData[3] = t2;
    MatrixData[6] = t3;

    t1 = MatrixData[1] * m.MatrixData[0] + MatrixData[4] * m.MatrixData[1] + MatrixData[7] * m.MatrixData[2];
    t2 = MatrixData[1] * m.MatrixData[3] + MatrixData[4] * m.MatrixData[4] + MatrixData[7] * m.MatrixData[5];
    t3 = MatrixData[1] * m.MatrixData[6] + MatrixData[4] * m.MatrixData[7] + MatrixData[7] * m.MatrixData[8];

    MatrixData[1] = t1;
    MatrixData[4] = t2;
    MatrixData[7] = t3;

    t1 = MatrixData[2] * m.MatrixData[0] + MatrixData[5] * m.MatrixData[1] + MatrixData[8] * m.MatrixData[2];
    t2 = MatrixData[2] * m.MatrixData[3] + MatrixData[5] * m.MatrixData[4] + MatrixData[8] * m.MatrixData[5];
    t3 = MatrixData[2] * m.MatrixData[6] + MatrixData[5] * m.MatrixData[7] + MatrixData[8] * m.MatrixData[8];

    MatrixData[2] = t1;
    MatrixData[5] = t2;
    MatrixData[8] = t3;
}


#pragma mark-matrix identity
void Matrix3::SetMatrixAsIdentityMatrix()
{
    for (int i = 0; i < 9; i++)
    {
        MatrixData[i] = 0.0f;
    }

    MatrixData[0] = MatrixData[4] = MatrixData[8] = 1.0f;
}


#pragma mark-matrix inverse
void Matrix3::SetMatrixAsInverseOfGivenMatrix(const Matrix3 &m)
{
    // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
    //    0    3    6
    //    1    4    7
    //    2    5    8

    float t1 = m.MatrixData[0] * m.MatrixData[4];
    float t2 = m.MatrixData[0] * m.MatrixData[7];
    float t3 = m.MatrixData[3] * m.MatrixData[1];
    float t4 = m.MatrixData[3] * m.MatrixData[1];
    float t5 = m.MatrixData[6] * m.MatrixData[2];
    float t6 = m.MatrixData[6] * m.MatrixData[2];

    float determinant = (t1 * m.MatrixData[8] - t2 * m.MatrixData[5] - t3 * m.MatrixData[8] - t4 * m.MatrixData[2] + t5 * m.MatrixData[5] - t6 * m.MatrixData[2]);

    if (determinant == 0)
    {
        return;
    }

    float invd = 1.0f / determinant;

    float m0 = (m.MatrixData[4] * m.MatrixData[8] - m.MatrixData[7] * m.MatrixData[5]) * invd;
    float m3 = -(m.MatrixData[3] * m.MatrixData[8] - m.MatrixData[6] * m.MatrixData[5]) * invd;

    float m6 = (m.MatrixData[3] * m.MatrixData[7] - m.MatrixData[6] * m.MatrixData[4]) * invd;

    float m1 = -(m.MatrixData[1] * m.MatrixData[8] - m.MatrixData[7] * m.MatrixData[2]) * invd;

    float m4 = (m.MatrixData[0] * m.MatrixData[8] - t6) * invd;

    float m7 = -(t2 - t4) * invd;

    float m2 = (m.MatrixData[1] * m.MatrixData[5] - m.MatrixData[4] * m.MatrixData[2]) * invd;

    float m5 = -(m.MatrixData[0] * m.MatrixData[5] - t5) * invd;

    float m8 = (t1 - t3) * invd;

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

Matrix3 Matrix3::GetInverseOfMatrix()
    const
{
    Matrix3 result;
    result.SetMatrixAsInverseOfGivenMatrix(*this);
    return result;
}

void Matrix3::InverseMatrix()
{
    SetMatrixAsInverseOfGivenMatrix(*this);
}


#pragma mark-matrix transpose
void Matrix3::SetMatrixAsTransposeOfGivenMatrix(const Matrix3 &m)
{
    //3x3 Matrix
    //    0    3    6
    //    1    4    7
    //    2    5    8

    //3x3 transposed
    //  0   1   2
    //  3   4   5
    //  6   7   8

    MatrixData[0] = m.MatrixData[0];
    MatrixData[3] = m.MatrixData[1];
    MatrixData[6] = m.MatrixData[2];
    MatrixData[1] = m.MatrixData[3];
    MatrixData[4] = m.MatrixData[4];
    MatrixData[7] = m.MatrixData[5];
    MatrixData[2] = m.MatrixData[6];
    MatrixData[5] = m.MatrixData[7];
    MatrixData[8] = m.MatrixData[8];
}

Matrix3 Matrix3::GetTransposedMatrix()
    const
{
    Matrix3 result;
    result.SetMatrixAsTransposeOfGivenMatrix(*this);
    return result;
}