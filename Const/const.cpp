#include <iostream>

//the const keyword specifies that a variables value is constant and doesn't change.
//tells the compiler to prevent anything changing it
//(read only)

int main() {

    const double PI = 3.14159;
    double radius = 10;
    double circumfirence = 2 * pi * radius;

    std::cout << circumfirence << "\n";

    return 0;
}