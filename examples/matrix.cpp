// Rishav (2022/01/18)

#include <iostream>
#include "../lanczos/lanczos.h"

int main()
{
    // Matrices
    Matrix<3, 3> p({{1, 2, 3}, {4, 5, 6}, {7, 8, 9}});
    Matrix<3, 3> q, r;
    q = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};

    // Vector
    Vector<3> a({1, 2, 3});

    // Scalar
    float x = 1.0;

    std::cout << p;  // Display matrix
    r = p + q;       // Matrix sum
    r = p - q;       // Vector difference
    r = x * p;       // Scalar multiplication
    a = p * a;       // Vector multiplication
    x = det(p);      // Determinant
    x = trace(p);    // Trace
    x = norm(p);     // Norm
    r = trans(p);    // Transpose
    r = inv(p);      // Inverse
    p.set(0, 0, 45); // First element = 45
    x = p(0, 0);     // Access first element

    return 0;
}
