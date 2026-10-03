#include <iostream>

int main() {

    double temp;
    int choice;

    std::cout << "Enter (1) to convert to celcius and (2) to convert to fahrenheit: ";
    std::cin >> choice;

    if(choice == 1) {
        std::cout << "Enter your temperature: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        
        std::cout << temp;
    }
    else if(choice == 2) {
        std::cout << "Enter your temperature: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32;

        std::cout << temp;
    }
    else {
        std::cout << "Please enter a valid temperature!\n";
    }

    return 0;
}