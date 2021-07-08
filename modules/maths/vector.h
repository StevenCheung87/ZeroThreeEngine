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

#include <math.h>

class Vector2
{
    public:
        float x;
        float y;

        Vector2(float uX, float uY)
            :   x(uX),
                y(uY){};

        Vector2(const Vector2 &v);

        ~Vector2();

        // Adding
        void operator+=(const Vector2 &v)
        {
            x += v.x;
            y += v.y;
        };
        Vector2 operator+(const Vector2 &v)
            const
        {
            return Vector2(x + v.x, y + v.y);
        }

        // Subtracting
        void operator-=(const Vector2 &v)
        {
            x -= v.x;
            y -= v.y;
        };
        Vector2 operator-(const Vector2 &v)
            const
        {
            return Vector2(x - v.x, y - v.y);
        }

        /* void operator*=(const float v)
        * Find the vector when multiplied by v
        */
        void operator*=(const float v)
        {
            x *= v;
            y *= v;
        }
        Vector2 operator*(const float v)
        {
            return Vector2(x * v, y * v);
        };

        /* void operator/=(const float v)
        * Find the vector when divided by v
        */
        void operator/=(const float v)
        {
            x /= v;
            y /= v;
        }
        Vector2 operator/(const float v)
        {
            return Vector2(x / v, y / v);
        };

        /* void operator%=(const float v)
        * Find the remaining number of a vector when divided by v
        */
        void operator%=(const float v)
        {
            x *= v;
            y *= v;
        }
        Vector2 operator%(const float v)
        {
            return Vector2((int)x % (int)v, (int)y % (int)y);
        };

        /* void operator*(const float v)
        * Find the multiplication of two vectors in a 2 dimensional plane
        */
        float operator*(const Vector2 &v)
            const
        {
            return (x * v.x + y * v.y);
        }
        float dot(const Vector2 &v)
        const
        {
            return (x * v.x + y * v.y);
        };

        /* flaot length*()
        * Does the math to find the length of a vector
        */ 
        float length()
        {
            return sqrt((x*x)+(y*y));
        }
};

class Vector3
{
    public:
        float x;
        float y;
        float z;

        Vector3(float uX, float uY, float uZ)
            :   x(uX),
                y(uY),
                z(uZ){};

        Vector3(const Vector3 &v);

        ~Vector3();

        // Adding
        void operator+=(const Vector3 &v)
        {
            x += v.x;
            y += v.y;
            z += v.z;
        };
        Vector3 operator+(const Vector3 &v)
            const
        {
            return Vector3(x + v.x, y + v.y, z + v.z);
        }   

        // Subtracting
        void operator-=(const Vector3 &v)
        {
            x -= v.x;
            y -= v.y;
            z -= v.z;
        };
        Vector3 operator-(const Vector3 &v)
            const
        {
            return Vector3(x - v.x, y - v.y, z - v.z);
        }

        /* void operator*=(const float v)
        * Find the vector when multiplied by v
        */
        void operator*=(const float v)
        {
            x *= v;
            y *= v;
            z *= v;
        }
        Vector3 operator*(const float v)
        {
            return Vector3(x * v, y * v, z * v);
        };

        /* void operator/=(const float v)
        * Find the vector when divided by v
        */
        void operator/=(const float v)
        {
            x /= v;
            y /= v;
            z /= v;
        }
        Vector3 operator/(const float v)
        {
            return Vector3(x / v, y / v, z / v);
        };

        /* void operator%=(const float v)
        * Find the remaining number of a vector when divided by v
        */
        void operator%=(const float v)
        {
            x *= v;
            y *= v;
            z *= v;
        }
        Vector3 operator%(const float v)
        {
            return Vector3((int)x % (int)v, (int)y % (int)v, (int)z % (int)v);
        };

        /* void operator*(const float v)
        * Find the multiplication of two vectors in a 3 dimensional plane
        */
        float operator*(const Vector3 &v)
            const
        {
            return (x * v.x + y * v.y + z * v.z);
        }
        float dot(const Vector3 &v)
            const
        {
            return (x * v.x + y * v.y + z * v.z);
        };

        /* Vector3 cross(const Vector3 &v) const
        * Finds the cross vector
        */
        Vector3 cross(const Vector3 &v) const
        {

            return Vector3(y * v.z - z * v.y,
                           z * v.x - x * v.z,
                           x * v.y - y * v.x);
        }
        void operator%=(const Vector3 &v)
        {
            *this = cross(v);
        }
        Vector3 operator%(const Vector3 &v) const
        {
            return Vector3(y * v.z - z * v.y,
                           z * v.x - x * v.z,
                           x * v.y - y * v.x);
        }

        /* float length*()
        * Does the math to find the length of a vector
        */
        float length()
        {
            return sqrt((x * x) + (y * y) + (z*z));
        }
};