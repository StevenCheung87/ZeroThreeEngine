#include <iostream>
#include "modules/maths/vector.h"

int main()
{
    Vector3 a(2, 3, 1);
    Vector3 b(1, 2, 0);
    Vector3 c = a.cross(b);

    // float c = a.dot(b);

    std::cout << c.x << "," << c.y << "," << c.z << std::endl;
    // std::cout << d << std::endl;
    system("pause");
    return 0;
}