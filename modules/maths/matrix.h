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

        Matrix3 operator*(const Matrix3 &m)
        {
            Matrix3 n;

            // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
            //    0    3    6
            //    1    4    7
            //    2    5    8

            n.MatrixData[0] = MatrixData[0] * m.MatrixData[0];
            n.MatrixData[3] = MatrixData[3] * m.MatrixData[3];
            n.MatrixData[6] = MatrixData[6] * m.MatrixData[6];

            n.MatrixData[1] = MatrixData[1] * m.MatrixData[1];
            n.MatrixData[4] = MatrixData[4] * m.MatrixData[4];
            n.MatrixData[7] = MatrixData[7] * m.MatrixData[7];

            n.MatrixData[2] = MatrixData[2] * m.MatrixData[2];
            n.MatrixData[5] = MatrixData[5] * m.MatrixData[5];
            n.MatrixData[8] = MatrixData[8] * m.MatrixData[8];

            return n;
        };
        void operator*=(const Matrix3 &m)
        {
            // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
            //    0    3    6
            //    1    4    7
            //    2    5    8

            MatrixData[3] *= m.MatrixData[3];
            MatrixData[0] *= m.MatrixData[0];
            MatrixData[6] *= m.MatrixData[6];

            MatrixData[1] *= m.MatrixData[1];
            MatrixData[4] *= m.MatrixData[4];
            MatrixData[7] *= m.MatrixData[7];

            MatrixData[2] *= m.MatrixData[2];
            MatrixData[5] *= m.MatrixData[5];
            MatrixData[8] *= m.MatrixData[8];
        }

        Matrix3 operator/(const Matrix3 &m)
        {
            Matrix3 n;

            // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
            //    0    3    6
            //    1    4    7
            //    2    5    8

            n.MatrixData[0] = MatrixData[0] / m.MatrixData[0];
            n.MatrixData[3] = MatrixData[3] / m.MatrixData[3];
            n.MatrixData[6] = MatrixData[6] / m.MatrixData[6];

            n.MatrixData[1] = MatrixData[1] / m.MatrixData[1];
            n.MatrixData[4] = MatrixData[4] / m.MatrixData[4];
            n.MatrixData[7] = MatrixData[7] / m.MatrixData[7];

            n.MatrixData[2] = MatrixData[2] / m.MatrixData[2];
            n.MatrixData[5] = MatrixData[5] / m.MatrixData[5];
            n.MatrixData[8] = MatrixData[8] / m.MatrixData[8];

            return n;
        };
        void operator/=(const Matrix3 &m)
        {
            // 3x3 matrix - column major. X vector is 0, 1, 2, etc. (openGL prefer way)
            //    0    3    6
            //    1    4    7
            //    2    5    8

            MatrixData[0] /= m.MatrixData[0];
            MatrixData[3] /= m.MatrixData[3];
            MatrixData[6] /= m.MatrixData[6];

            MatrixData[1] /= m.MatrixData[1];
            MatrixData[4] /= m.MatrixData[4];
            MatrixData[7] /= m.MatrixData[7];

            MatrixData[2] /= m.MatrixData[2];
            MatrixData[5] /= m.MatrixData[5];
            MatrixData[8] /= m.MatrixData[8];
        }
};
