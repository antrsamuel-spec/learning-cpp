#include <iostream>

//return = return a value back to the spot where you called the encompassing function

double square(double length);
double cube(double length);

int main() {

    double length = 5.0;
    double areaSquare = square(length);
    double areaCube = cube(length);

    std::cout << areaSquare << "\n";
    std::cout << areaCube << "\n";

    return 0;
}

double square(double length) {
    double result = length * length;
    return result;    
}

double cube(double length) {
    double result = (length * length) * 6;
    return result;
}