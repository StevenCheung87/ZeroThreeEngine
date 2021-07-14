#include "vector.h"

/*************************************************************************/
/*  class Vector2                                                        */
/*************************************************************************/
#pragma mark-constructors2D
Vector2::Vector2(float uX, float uY)
        :   x(uX),
            y(uY)
            {}

Vector2::Vector2() : x(0.0), y(0.0){};


#pragma mark-destructor2D
Vector2::~Vector2(){}


#pragma mark-add2D
void Vector2::operator+=(const Vector2 &v)
{
    x += v.x;
    y += v.y;
}

Vector2 Vector2::operator+(const Vector2 &v)
    const
{
    return Vector2(x + v.x, y + v.y);
}


#pragma mark-subraction2D
void Vector2::operator-=(const Vector2 &v)
{
    x -= v.x;
    y -= v.y;
}

Vector2 Vector2::operator-(const Vector2 &v)
    const
{
    return Vector2(x - v.x, y - v.y);
}


#pragma mark-multiplication2D
void Vector2::operator*=(const float v)
{
    x *= v;
    y *= v;
}

Vector2 Vector2::operator*(const float v)
const
{
    return Vector2(x * v, y * v);
}


#pragma mark-division2D
void Vector2::operator/=(const float v)
{
    x /= v;
    y /= v;
}

Vector2 Vector2::operator/(const float v)
const
{
    return Vector2(x / v, y / v);
}


#pragma mark-modulus2D
void Vector2::operator%=(const float v)
{
    x *= v;
    y *= v;
}

Vector2 Vector2::operator%(const float v)
const
{
    return Vector2((int)x % (int)v, (int)y % (int)y);
}


#pragma mark-dot product2D
float Vector2::operator*(const Vector2 &v)
    const
{
    return (x * v.x + y * v.y);
}

float Vector2::dot(const Vector2 &v)
    const
{
    return (x * v.x + y * v.y);
}


#pragma mark-length2D
float Vector2::Length()
{
    return sqrt((x*x)+(y*y));
}

#pragma mark-conjugate2D
void Vector2::Conjugate()
{
    x = -1 * x;
    y = -1 * y;
}

#pragma mark-normalize2D
void Vector2::Normalize()
{
    float mag = std::sqrt(x * x + y * y);

    if (mag > 0.0f)
    {

        //normalize it
        float OneOverMag = 1.0f / mag;

        x = x * OneOverMag;
        y = y * OneOverMag;
    }
}

#pragma mark-clear2D
void Vector2::Zero()
{
    x = 0;
    y = 0;
}

void Vector2::Absolute()
{
    x = std::abs(x);
    y = std::abs(y);
}

#pragma mark-show2D
void Vector2::Show()
{
    std::cout << "(" << x << "," << y << ")" << std::endl;
}

void Vector2::negate()
{
    x = -1 * x;
    y = -1 * y;
}



/*************************************************************************/
/*  class Vector3                                                        */
/*************************************************************************/
#pragma mark-constructors3D
Vector3::Vector3(float uX, float uY, float uZ)
    :   x(uX),
        y(uY),
        z(uZ){}

Vector3::Vector3(){}


#pragma mark-destructor3D
Vector3::~Vector3(){};


#pragma mark-add3D
void Vector3::operator+=(const Vector3 &v)
{
    x += v.x;
    y += v.y;
    z += v.z;
}

Vector3 Vector3::operator+(const Vector3 &v)
    const
{
    return Vector3(x + v.x, y + v.y, z + v.z);
}


#pragma mark-subraction3D
void Vector3::operator-=(const Vector3 &v)
{
    x -= v.x;
    y -= v.y;
    z -= v.z;
}

Vector3 Vector3::operator-(const Vector3 &v)
    const
{
    return Vector3(x - v.x, y - v.y, z - v.z);
}


#pragma mark-multiply3D
void Vector3::operator*=(const float v)
{
    x *= v;
    y *= v;
    z *= v;
}

Vector3 Vector3::operator*(const float v)
const
{
    return Vector3(x * v, y * v, z * v);
}


#pragma mark-division3D
void Vector3::operator/=(const float v)
{
    x /= v;
    y /= v;
    z /= v;
}

Vector3 Vector3::operator/(const float v)
const
{
    return Vector3(x / v, y / v, z / v);
}


#pragma mark-modulus3D
void Vector3::operator%=(const float v)
{
    x *= v;
    y *= v;
    z *= v;
}

Vector3 Vector3::operator%(const float v)
{
    return Vector3((int)x % (int)v, (int)y % (int)v, (int)z % (int)v);
}


#pragma mark-dot product3D
float Vector3::operator*(const Vector3 &v)
    const
{
    return (x * v.x + y * v.y + z * v.z);
}

float Vector3::dot(const Vector3 &v)
    const
{
    return (x * v.x + y * v.y + z * v.z);
}

float Vector3::angle(const Vector3 &v)
{

}

void Vector3::operator%=(const Vector3 &v)
{
    *this = cross(v);
}

Vector3 Vector3::operator%(const Vector3 &v) const
{
    return Vector3(y * v.z - z * v.y,
                   z * v.x - x * v.z,
                   x * v.y - y * v.x);
}

Vector3 Vector3::cross(const Vector3 &v) const
{

    return Vector3(y * v.z - z * v.y,
                   z * v.x - x * v.z,
                   x * v.y - y * v.x);
}

#pragma mark-conjugate3D
void Vector3::Conjugate()
{
    x = -1 * x;
    y = -1 * y;
    z = -1 * z;
}

#pragma mark-normalize3D
void Vector3::Normalize()
{
    float mag = std::sqrt(x * x + y * y + z * z);

    if (mag > 0.0f)
    {

        //normalize it
        float OneOverMag = 1.0f / mag;

        x = x * OneOverMag;
        y = y * OneOverMag;
        z = z * OneOverMag;
    }
}

#pragma mark-clear3D
void Vector3::Zero()
{
    x = 0;
    y = 0;
    z = 0;
}

void Vector3::Absolute()
{
    x = std::abs(x);
    y = std::abs(y);
    z = std::abs(z);
}

#pragma mark-show3D
void Vector3::Show()
{
    std::cout << "(" << x << "," << y << "," << z << ")" << std::endl;
}

void Vector3::negate()
{
    x = -1 * x;
    y = -1 * y;
    z = -1 * z;
}
