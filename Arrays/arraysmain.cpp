#include <iostream>

//array = data structure that can hold multiple values
//        values are accessed by an index number
//        "kind of like a variable that holds multiple values"

int main() {

    std::string cars[3];

    cars[0] = "Camaro";
    cars[1] = "Mustang";
    cars[2] = "Camry";

    std::cout << cars[0] << "\n";
    std::cout << cars[1] << "\n";
    std::cout << cars[2] << "\n";

    return 0;
}