#include <iostream>
#include "NumberLib/framework.h"
#include "vector.h"

int main()
{
    // usage of static lib

    Number x, y(2);
    std::cout << x.getValue() << std::endl;
    x = Number(9) / Number(2);
    std::cout << x.getValue() << std::endl;
    x.Multiply(y); // also can x = x * y
    std::cout << x.getValue() << std::endl;

    // usage of dynamic lib

    Vector v(3, 4);
    v.toPolar();
    Vector z(4, 5);
    v.Add(z); // also can v = v + z;
}
