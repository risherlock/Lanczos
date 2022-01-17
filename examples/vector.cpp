// Rishav (2022/01/18)

#include <iostream>
#include "../lanczos/lanczos.h"

int main()
{
    // Matrices
    Matrix<3, 3> m({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});

    // Vectors
    Vector<3> a({1, 2, 3});
    Vector<3> b, c;
    b = {4, 5, 6};

    // Scalar
    float x = 1.0;

    std::cout << a;  // Display vector
    c = a + b;       // Vector sum
    c = a - b;       // Vector difference
    c = x * a;       // Scalar multiplication
    c = m * a;       // Matrix multiplication
    x = dot(a, b);   // Dot product
    c = cross(a, b); // Cross product
    c.set(0, 45);    // First element = 45
    x = c(0);        // Access first element

    return 0;
}
