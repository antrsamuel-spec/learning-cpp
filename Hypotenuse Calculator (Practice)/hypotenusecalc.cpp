#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter the length of a: ";
    std::cin >> a;

    std::cout << "Enter the length of b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The length of your hyponeuse is: "  << c;

    return 0;
}