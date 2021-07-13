/*************************************************************************/
/*  matrix.h                                                             */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           ZeroThree Engine                            */
/*************************************************************************/
/* Copyright (c) 2021-present Steven Cheung.                             */
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
#include "vector.h"

class Matrix3
{
    public:
        // Matrix data elements
        float MatrixData[9] = {0,0};

#pragma mark-constructors
        /*!
         *  Constructor
         */
        Matrix3();

        /*!
         *  Constructor
         */
        Matrix3(float m0, float m3, float m6, float m1, float m4, float m7, float m2, float m5, float m8);

#pragma mark-destructors
        /*!
         *  Destructor
         */
        ~Matrix3(){};

#pragma mark-debug
        /* 
        * Debug, show the matrix in the console log
        */ 
        void Show();

#pragma mark-matrix addition
        /*!
         *  @brief Add matrices together
         *
         *  @param m matrix
         *
         *  @return new matrix
         */
        Matrix3 operator+(const Matrix3 &m);

        /*!
         *  @brief Add matrices together
         *
         *  @param m matrix
         *
         *  @return new matrix
         */
        void operator+=(const Matrix3 &m);

#pragma mark-matrix subtraction
        /*!
         *  @brief Subtract matrices together
         *
         *  @param m matrix
         *
         *  @return new matrix
         */
        Matrix3 operator-(const Matrix3 &m);

        /*!
         *  @brief Subtract matrices together
         *
         *  @param m matrix
         *
         *  @return new matrix
         */
        void operator-=(const Matrix3 &m);

#pragma mark-matrix multiplication scalar
        /*!
         *  @brief Multiply matrix (scalar)
         *
         *  @param m matrix
         *
         *  @return matrix product
         */
        Matrix3 operator*(const float s);

        /*!
         *  @brief Multiply matrix (scalar)
         *
         *  @param m matrix
         */
        void operator*=(const float s);

#pragma mark-matrix division scalar
        /*!
         *  @brief Divide matrix (scalar)
         *
         *  @param m matrix
         *
         *  @return matrix product
         */
        Matrix3 operator/(const float s);

        /*!
         *  @brief Divide matrix (scalar)
         *
         *  @param m matrix
         *
         *  @return matrix product
         */
        void operator/=(const float s);

#pragma mark-vector transfomation
        /*!
         *  @brief transform the given vector by this matrix
         *
         *  @param v Vector
         *
         *  @return new transform vector
         */
        Vector3 operator*(const Vector3 &v)const;

        /*!
         *  @brief transform the given vector by this matrix
         *
         *  @param v Vector
         *
         *  @return new transform vector
         */
        Vector3 Matrix3::TransformVectorByMatrix(const Vector3 &v)const;

#pragma mark-matrix multiplication
        /*!
         *  @brief Multiply matrix
         *
         *  @param m matrix
         *
         *  @return matrix product
         */
        Matrix3 operator*(const Matrix3 &m);

        /*!
         *  @brief Multiply matrix
         *
         *  @param m matrix
         *
         *  @return matrix product
         */
        void operator*=(const Matrix3 &m);

#pragma mark-matrix identity
        /*!
         *  @brief  set current matrix as identity matrix
         */
        void SetMatrixAsIdentityMatrix();

#pragma mark-matrix inverse
        /*!
         *  @brief Set the matrix to be the inverse of the given matrix
         *
         *  @param m matrix
         */
        void SetMatrixAsInverseOfGivenMatrix(const Matrix3 &m);

        /*!
         *  @brief returns a new matrix containing the inverse of the matrix
         *
         *  @return Matrix inverse
         */
        Matrix3 GetInverseOfMatrix()const;

        /*!
         *  @brief Inverts the matrix
         */
        void InverseMatrix();

#pragma mark-matrix transpose
        /*!
         *  @brief Set the matrix as the transpose of the given matrix
         *
         *  @param m matrix
         */
        void SetMatrixAsTransposeOfGivenMatrix(const Matrix3 &m);

        /*!
         *  @brief Transpose the matrix
         *
         *  @return matrix transpose
         */
        Matrix3 GetTransposedMatrix()const;
};
