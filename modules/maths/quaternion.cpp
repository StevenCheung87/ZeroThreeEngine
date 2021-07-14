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
