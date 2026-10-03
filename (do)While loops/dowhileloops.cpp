#include <iostream>

// do while loop = run some code and only run it again if condition is true, else continue

int main() { 

    int number;

    do {
        std::cout << "Please enter a positive number: ";
        std::cin >> number;
    } while(number < 0);

    std::cout << "Your number is: " << number;

    return 0;
}