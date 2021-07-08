/*************************************************************************/
/*  matrix.h                                                            */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           ZeroThree Engine                            */
/*************************************************************************/
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#pragma once

#include <iostream>

class Matrix3
{
    public:
        // Matrix data elements
        float MatrixData[9] = {0,0};

        Matrix3();

        Matrix3(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8);

        ~Matrix3(){};

        void Show();

        /* Matrix3 operator/(const float s)
        * Adds elements from one matrix from another. 
        */
        Matrix3 operator+(const Matrix3 &m)
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
        };
        void operator+=(const Matrix3 &m)
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

        /* Matrix3 operator/(const float s)
        * Subtracts the elements from one matrix from another. 
        */
        Matrix3 operator-(const Matrix3 &m)
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
        };
        void operator-=(const Matrix3 &m)
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

        /* Matrix3 operator/(const float s)
        * Multiplies the elements within the matrix by a number (SCALAR)
        */
        Matrix3 operator*(const float s)
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
        };
        void operator*=(const float s)
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

        /* Matrix3 operator/(const float s)
        * Divides the elements within the matrix by a number
        */
        Matrix3 operator/(const float s)
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
        };
        void operator/=(const float s)
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

        /* Matrix3 operator*(const Matrix3 &m)
        * Multiplies the elements within the matrix by a number (NON-SCALAR)
        */
        Matrix3 operator*(const Matrix3 &m)
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
        };
        void operator*=(const Matrix3 &m)
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


        /* void SetMatrixAsIdentityMatrix()
        * Sets the matrix as the identity matrix (cell 0, 4 and 8 are set to 1)
        */
        void SetMatrixAsIdentityMatrix()
        {
            for (int i=0; i<9; i++)
            {
                MatrixData[i] = 0.0f;
            }

            MatrixData[0] = MatrixData[4] = MatrixData[8] = 1.0f;
        }

        /* void SetMatrixAsInverseOfGivenMatrix(const Matrix3 &m)
        * Given the matrix it is inversed to find the new matrix
        */
        void SetMatrixAsInverseOfGivenMatrix(const Matrix3 &m)
        {
            // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
            //    0    3    6
            //    1    4    7
            //    2    5    8

            float t1 = m.MatrixData[0] * m.MatrixData[4];
            float t2 = m.MatrixData[0] * m.MatrixData[7];
            float t3 = m.MatrixData[3] * m.MatrixData[1];
            float t4 = m.MatrixData[3] * m.MatrixData[7];
            float t5 = m.MatrixData[6] * m.MatrixData[1];
            float t6 = m.MatrixData[6] * m.MatrixData[4];

            float determinant = (t1*m.MatrixData[8]-t2*m.MatrixData[5] - t3*m.MatrixData[8]-t4*m.MatrixData[2] + t5*m.MatrixData[5]-t6*m.MatrixData[2]);

            if (determinant == 0)
            {
                return;
            }

            float invd = 1.0f/determinant;

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
        Matrix3 GetInverseOfMatrix()
        const
        {
            Matrix3 result;
            result.SetMatrixAsInverseOfGivenMatrix(*this);
            return result;
        }
        void InverseMatrix()
        {
            SetMatrixAsInverseOfGivenMatrix(*this);
        }

        /* void SetMatrixAsTransposeOfGivenMatrix(const Matrix3 &m)
        * Sets the given matrix int columns from its initial row configuration
        */
        void SetMatrixAsTransposeOfGivenMatrix(const Matrix3 &m)
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
        Matrix3 GetTransposedMatrix()
        const
        {
            Matrix3 result;
            result.SetMatrixAsTransposeOfGivenMatrix(*this);
            return result;
        }
};
