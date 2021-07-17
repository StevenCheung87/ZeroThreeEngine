/*************************************************************************/
/*  vector.h                                                            */
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
#include <math.h>

class Vector2
{
    public:
        /*!
         *  @brief sx vector component
         */
        float x;
        /*!
         *  @brief y vector component
         */
        float y;

#pragma mark-constructors2D
        /*
        * @brief Constructor to create a 3D vector with x, y, and z components
        * 
        * @param uX x component
        * @param uY y component
        * 
        * @ return Creates a vector with the given x, y and z components
        */
        Vector2(float uX, float uY);

        /*
        * @brief Constructor to create a 2D vector with zero vector components.
        */
        Vector2();

#pragma mark-destructor2D
        /*
        * @brief 2D vector desctructor
        */
        ~Vector2();

#pragma mark-add2D
        /*!
        * @brief Calculates the addition of two vectors.
        * 
        * @param v Vector to add.
        * 
        * @return Resultant of two vectors.
        */
        void operator+=(const Vector2 &v);

        /*!
        * @brief Calculates the addition of two vectors.
        * 
        * @param v 2D vector to add.
        * 
        * @return Returns a third vector representing the addition of two vectors.
        */
        Vector2 operator+(const Vector2 &v)const;

#pragma mark-subraction2D
        /*!
        * @brief Calculates the subtraction of two vectors.
        * 
        * @param v Vector to subtract.
        * 
        * @return Resultant of two vectors.
        */
        void operator-=(const Vector2 &v);

        /*!
        * @brief Calculates the subtraction of two vectors.
        * 
        * @param v Vector to subtract.
        * 
        * @return Returns a third vector representing the subtraction of two vectors.
        */
        Vector2 operator-(const Vector2 &v)const;

#pragma mark-multiplication2D
        /*!
        * @brief Calculates the multiplication of a vector by scalar.
        * 
        * @param v Scalar.
        * 
        * @return Product of multiplcation.
        */
        void operator*=(const float v);

        /*!
        * @brief Calculates the multiplication of a vector by scalar.
        * 
        * @param v Scalar.
        * 
        * @return Vector representing product.
        */
        Vector2 operator*(const float v)const;

#pragma mark-division2D
        /*!
         *  @brief  Division of vector by scalar.
         *
         *  @param v Scalar
         *
         *  @return Quotient of division.
         */
        void operator/=(const float v);

        /*!
         *  @brief  Division of vector by scalar.
         *
         *  @param v Scalar
         *
         *  @return Quotient of division.
         */
        Vector2 operator/(const float v)const;

#pragma mark-modulus2D
        /*!
         *  @brief  Modulus of vector by scalar.
         *
         *  @param v Scalar
         *
         *  @return Resultant of the modulo of vector by scalar.
         */
        void operator%=(const float v);

        /*!
         *  @brief  Modulus of vector by scalar.
         *
         *  @param v Scalar
         *
         *  @return Returns a third vector representing the modulo of vector by scalar.
         */
        Vector2 operator%(const float v)const;

#pragma mark-dot product2D
        /*!
         *  @brief  Calculate dot product.
         *
         *  @param v Vector
         *
         *  @return Resultant of Dot product.
         */
        float operator*(const Vector2 &v)const;

        /*!
         *  @brief  Calculate dot product.
         *
         *  @param v Vector
         *
         *  @return Return the Dot product.
         */
        float dot(const Vector2 &v)const;

#pragma mark-length2D
        /*!
         *  @brief  Calculate the length of vector.
         *
         *  @return Length result.
         */
        float Length();

#pragma mark-conjugate2D
        /*!
         *  @brief  Conjugate the vector.
         */
        void Conjugate();

#pragma mark-normalize2D
        /*!
         *  @brief  Normalize the vector.
         */
        void Normalize();

#pragma mark-clear2D
        /*!
         *  @brief  Convert vector to a zero vector
         */
        void Zero();

        /*!
         *  @brief  Calculate absolute value of vector
         */
        void Absolute();

#pragma mark-show2D
        /*!
         *  @brief  Print vector components
         */
        void Show();

        //Negate all components
        void negate();
};

class Vector3
{
    public:
        /*!
         *  @brief x vector component
         */
        float x;

        /*!
         *  @brief y vector component
         */
        float y;

        /*!
         *  @brief z vector component
         */
        float z;

#pragma mark-constructors3D
        /* 
        * @brief Constructor to create a 3D vector with x,y, and z components
        * 
        * @param uX x component 
        * @param uY y component
        *  @param uZ z component
        * 
        * @return Creates a vector with the given x,y and z components
        */
        Vector3(float uX, float uY, float uZ);

        /* 
        * @brief Constructor to create a 3D vector with zero vector components.
         */
        Vector3();

#pragma mark-destructor3D
        /*
        * @brief 3D vector desctructor
        */
        ~Vector3();

#pragma mark-add3D
        /*!
        * @brief Calculates the addition of two vectors.
        * 
        * @param v Vector to add.
        * 
        * @return Resultant of two vectors.
        */
        void operator+=(const Vector3 &v);

        /*!
        * @brief Calculates the addition of two vectors.
        * 
        * @param v 3D vector to add.
        * 
        * @return Returns a third vector representing the addition of two vectors.
        */
        Vector3 operator+(const Vector3 &v)const;

#pragma mark-subraction3D
        /*!
        * @brief Calculates the subtraction of two vectors.
        * 
        * @param v Vector to subtract.
        * 
        * @return Resultant of two vectors.
        */
        void operator-=(const Vector3 &v);

        /*!
        * @brief Calculates the subtraction of two vectors.
        * 
        * @param v Vector to subtract.
        * 
        * @return Returns a third vector representing the subtraction of two vectors.
        */
        Vector3 operator-(const Vector3 &v)const;

#pragma mark-multiply3D
        /*!
        * @brief Calculates the multiplication of a vector by scalar.
        * 
        * @param v Scalar.
        * 
        * @return Product of multiplcation.
        */
        void operator*=(const float v);

        /*!
        * @brief Calculates the multiplication of a vector by scalar.
        * 
        * @param v Scalar.
        * 
        * @return Vector representing product.
        */
        Vector3 operator*(const float v)const;

#pragma mark-division3D
        /*!
         *  @brief  Division of vector by scalar.
         *
         *  @param v Scalar
         *
         *  @return Quotient of division.
         */
        void operator/=(const float v);

        /*!
         *  @brief  Division of vector by scalar.
         *
         *  @param v Scalar
         *
         *  @return Quotient of division.
         */
        Vector3 operator/(const float v)const;

#pragma mark-modulus3D
        /*!
         *  @brief  Modulus of vector by scalar.
         *
         *  @param v Scalar
         *
         *  @return Resultant of the modulo of vector by scalar.
         */
        void operator%=(const float v);

        /*!
         *  @brief  Modulus of vector by scalar.
         *
         *  @param v Scalar
         *
         *  @return Returns a third vector representing the modulo of vector by scalar.
         */
        Vector3 operator%(const float v);

#pragma mark-dot product3D
        /*!
         *  @brief  Calculate dot product.
         *
         *  @param v Vector
         *
         *  @return Dot product result.
         */
        float operator*(const Vector3 &v)const;

        /*!
         *  @brief  Calculate dot product.
         *
         *  @param v Vector
         *
         *  @return Dot product result.
         */
        float dot(const Vector3 &v)const;

        /*!
         *  @brief  Calculates the angle between vectors.
         *
         *  @param v Vector
         *
         *  @return Returns the angle between vectors in degrees.
         */
        float angle(const Vector3 &v);

        /*!
         *  @brief  Calculate cross product.
         *
         *  @param v Vector
         *
         *  @return Cross product result.
         */
        void operator%=(const Vector3 &v);

        /*!
         *  @brief  Calculate cross product.
         *
         *  @param v Vector
         *
         *  @return Cross product result.
         */
        Vector3 operator%(const Vector3 &v)const;

        /*!
         *  @brief  Calculate cross product.
         *
         *  @param v Vector
         *
         *  @return Cross product result.
         */
        Vector3 cross(const Vector3 &v)const;

#pragma mark-conjugate3D
        /*!
         *  @brief  Conjugate the vector.
         */
        void Conjugate();

#pragma mark-normalize3D
        /*!
         *  @brief  Normalize the vector.
         */
        void Normalize();

#pragma mark-clear3D
        /*!
         *  @brief  Convert vector to a zero vector
         */
        void Zero();
        
        /*!
         *  @brief  Calculate absolute value of vector
         */
        void Absolute();

#pragma mark-show3D
        /*!
         *  @brief  Print vector components
         */
        void Show();
        
        //Negate all components
        void negate();

#pragma mark-rotating vector by quaternion
        /*!
        *  @brief Rotate a vector about an angle using quaternions
        *
        *  @param uAngle angle to rotate
        *  @param uAxis  axis to rotate about
        *
        *  @return Vector rotation
        */
        Vector3 RotateVectorAboutAngleAndAxis(float uAngle, Vector3 &uAxis);
};