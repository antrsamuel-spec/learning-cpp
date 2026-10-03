#include <iostream>

//type conversion = conversion a value of one data type to another
//                  Implicit = automatic
//                  Explicit = precede value with new data type (int)

int main() {

    double x = (int) 3.14;

    std::cout << x << "\n";
    std::cout << (char) 100 << "\n";

    return 0;
}