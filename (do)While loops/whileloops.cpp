#include <iostream>

//while loop = repeats code, while condition is true

int main() {

    std::string name;

    while(name.empty()) {
        std::cout << "Please enter a name: ";
        std::cin >> name;
    }

    std::cout << "Hello, " << name;

    return 0;
}