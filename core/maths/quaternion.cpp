#include "quaternion.h"
#include "vector.h"


Quaternion::Quaternion(){}

Quaternion::Quaternion(float uS, Vector3 &uV)
    : s(uS), 
    v(uV)
{}

Quaternion::~Quaternion(){}

void Quaternion::operator+=(const Quaternion &q)
{
    s += q.s;
    v += q.v;
}

Quaternion Quaternion::operator+(const Quaternion &q)
const
{
    float scalar = s + q.s;
    Vector3 imaginary = v + q.v;

    return Quaternion(scalar, imaginary);
}

void Quaternion::operator-=(const Quaternion &q)
{
    s -= q.s;
    v -= q.v;
}

Quaternion Quaternion::operator-(const Quaternion &q)
const
{
    float scalar = s - q.s;
    Vector3 imaginary = v - q.v;

    return Quaternion(scalar, imaginary);
}

void Quaternion::operator*=(const Quaternion &q)
{
    (*this) = multiply(q);
}

Quaternion Quaternion::operator*(const Quaternion &q) 
const
{
    float scalar = s * q.s - v.dot(q.v);
    Vector3 imaginary = v.cross(q.v) + v * q.s + q.v * s;

    return Quaternion(scalar, imaginary);
};

Quaternion Quaternion::multiply(const Quaternion &q)
const
{
    float scalar = s * q.s - v.dot(q.v);
    Vector3 imaginary = v.cross(q.v) + v * q.s + q.v * s;

    return Quaternion(scalar, imaginary);
};

void Quaternion::operator/=(const Quaternion &q)
{
    (*this) = divide(q);
}

Quaternion Quaternion::operator/(const Quaternion &q)
    const
{
    float scalar = s * q.s + v.dot(q.v);
    Vector3 imaginary = v * q.s - q.v * s - v.cross(q.v);

    return Quaternion(scalar, imaginary);
};

Quaternion Quaternion::divide(const Quaternion &q)
    const
{
    float scalar = s * q.s + v.dot(q.v);
    Vector3 imaginary = v * q.s - q.v * s - v.cross(q.v);

    return Quaternion(scalar, imaginary);
};

void Quaternion::operator*=(const float value)
{
    s *= value;
    v *= value;
}

Quaternion Quaternion::operator*(const float value)
const
{  
    float scalar = s * value;
    Vector3 imaginary = v * value;

    return Quaternion(scalar, imaginary);
}

void Quaternion::operator/=(const float value)
{
    s /= value;
    v /= value;
}

Quaternion Quaternion::operator/(const float value)
const
{
    float scalar = s / value;
    Vector3 imaginary = v / value;

    return Quaternion(scalar, imaginary);
}

float Quaternion::Norm()
{
    float scalar = s * s;
    float imaginary = v * v;

    return sqrt(scalar+imaginary);
}

float Quaternion::Normalisation()
{
    if (Norm() != 0)
    {
        float NormValue = 1/Norm();

        s *= NormValue;
        v *= NormValue;
    }
}

Quaternion Quaternion::Conjugate()
{
    float scalar = s;
    Vector3 imaginary = v * (-1);

    return Quaternion(scalar, imaginary);
}

Quaternion Quaternion::Inverse()
{
    float AbsoluteValue = Norm();
    AbsoluteValue *= AbsoluteValue;
    AbsoluteValue = 1 / (AbsoluteValue);

    Quaternion ConjugateValue = Conjugate();

    float scalar = ConjugateValue.s * AbsoluteValue;
    Vector3 imaginary = ConjugateValue.v * AbsoluteValue;
    
    return Quaternion(scalar, imaginary);
}
